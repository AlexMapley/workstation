#include <stdio.h>

int main (void) {
    // int num;
    // char string[21];

    // puts("Please enter a number:");
    // scanf("%d", &num);


    // puts("Please enter a string less than 20 chars:");
    // scanf("%s", string);

    // printf("num is %d\n", num);
    // printf("string is %s\n", string);

    // gets is unsafe
    char string2[21];
    gets (string2);
    printf("string is now %s\n", string2);

    return 0;
}