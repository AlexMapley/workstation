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
	for (i = 0; s[i] != '\0'; i++) {
		s[i] ^= XOR_BYTE;
	}
}

// void cryptFile(char *filename) {

//     // Read Buffer
//     FILE *f = fopen(filename, "r+");
//     fseek(f, 0, SEEK_END);
//     long fsize = ftell(f);
//     fseek(f, 0, SEEK_SET);  /* same as rewind(f); */
//     char *contents = malloc(fsize + 1);
//     fread(contents, 1, fsize, f);
//     fclose(f);

//     // Display
//     contents[fsize] = 0;
//     printf("\n%s\n", contents);

//     // Write Buffer
//     FILE *fp = fopen(filename, "w+");
//     fprintf(fp, contents);
//     fclose(f);
//     f = NULL;
// }

bool isFile(char *filename) {
    bool has_dot = false;
    for (int i = 0; i < strlen(filename); i++) {
        if (filename[i] == '.') {
            has_dot = true;
        }
    }
    return has_dot;
}

char **ListFiles() {
    char *files[10000];
    int index = 0;
    DIR *d;
    struct dirent *dir;

    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            if (isFile(dir->d_name)) {
                files[index++] = dir->d_name;
                // printf("%d\n", index);
                printf("%s\n", dir->d_name);
            }
        }
        closedir(d);
    }
}


int main (int agrc, char *argv[]) {

    // Get current path 
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }
   
//    char fileName[PATH_MAX];
//    strcpy(fileName, cwd);
//    strcat(fileName, "/Dockerfile");
//    printf("\n\n%s\n\n", fileName);

//    cryptFile(fileName);

    ListFiles();
}
