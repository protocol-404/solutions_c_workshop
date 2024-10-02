#include <stdio.h>

void strConcat(char str1[], char str2[]);
void strDisplay(char str[]);

int main() {
    char str1[100];
    char str2[100];

    printf("Enter a str1: ");
    scanf("%s", str1);

    printf("Enter a str2: ");
    scanf("%s", str2);

    printf("str1 concat str2: ");
    strConcat(str1, str2);
    strDisplay(str1);

    return 0;
}