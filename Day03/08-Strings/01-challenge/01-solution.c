#include <stdio.h>

void strDisplay(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}