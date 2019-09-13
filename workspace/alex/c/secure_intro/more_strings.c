#include <stdio.h>

int main (void) {
    char *str = "This is a string";

    printf("%s\n", str);

    // will cause a seg fault
    str[0] = "A";

    return 0;
}