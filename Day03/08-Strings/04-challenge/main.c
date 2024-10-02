#include <stdio.h>

void strCompare(char str1[], char str2[]);

int main() {
    char str1[100];
    char str2[100];

    printf("Enter a str1: ");
    scanf("%s", str1);

    printf("Enter a str2: ");
    scanf("%s", str2);

    printf("str1 compare str2: ");
    strCompare(str1, str2);

    return 0;
}