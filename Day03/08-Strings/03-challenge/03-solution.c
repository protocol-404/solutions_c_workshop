#include <stdio.h>

void strConcat(char str1[], char str2[]) {
    int i = 0;
    int j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

void strDisplay(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}