#include <stdio.h>

void ignoreSpace(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n') {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
}