#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#define XOR_BYTE 0xA1

void xorString (char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		s[i] ^= XOR_BYTE;
	}
}

void cryptFile(char *filename) {

    FILE *f = fopen(filename, "r+");
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);  /* same as rewind(f); */

    char *contents = malloc(fsize + 1);
    fread(contents, 1, fsize, f);
    fclose(f);

    contents[fsize] = 0;
    printf("\n%s\n", contents);

    xorString(contents);
    printf("\n%s\n", contents);

    // xorString(contents);
    // printf("\n%s\n", contents);

//     fp = fopen("/tmp/test.txt", "w+");
//    fprintf(fp, "This is testing for fprintf...\n");
//    fputs("This is testing for fputs...\n", fp);
//    fclose(fp);

    FILE *fp = fopen(filename, "w+");

    // Write Buffer
    fprintf(fp, contents);
    // fwrite(contents, 1, sizeof(contents), f);

    // Close File
    fclose(f);
    f = NULL;
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
   
   char fileName[PATH_MAX];
   strcpy(fileName, cwd);
   strcat(fileName, "/Dockerfile");
   printf("\n\n%s\n\n", fileName);

   cryptFile(fileName);
}
