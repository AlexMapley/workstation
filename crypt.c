#include <stdio.h>
#include <strings.h>
#include <unistd.h>
#include <limits.h>

#define XOR_BYTE 0xA1

void xorString (char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		s[i] ^= XOR_BYTE;
	}
}

// void cryptFile(char *filename) {
//    FILE *fp;
//    fp = fopen(file_name, "r"); // read mode
 
//    if (fp == NULL)
//    {
//       perror("Error while opening the file.\n");
//       exit(EXIT_FAILURE);
//    }
//    while((ch = fgetc(fp)) != EOF)
//       printf("%c", ch);
 
//    fclose(fp);
//    return 0;
// }


int main (int agrc, char *argv[]) {

    // Get current path 
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }
   
   char *fileName;
   strcat((cwd, "Dockerfile"), fileName);

   printf("\n\n%s\n\n", fileName);
//    cryptFile("Dockerfile")

}
