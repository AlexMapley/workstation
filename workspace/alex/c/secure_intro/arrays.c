#include <stdio.h>

int main (void) {
    int array[4];
    array[0] = 42;
    array[1] = 59;

    char string[5] = "word";
    printf("%s\n", string);

    char broken_string[4] = "word";
    printf("%s\n", broken_string);


    return 0;
}