#include <stdio.h>
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
    FILE *fp;
    fp = fopen(filename, "r"); // read mode

    char ch;
    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
    }
    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
 
    fclose(fp);
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
