#include <stdio.h>

int strLenG(char str[]);

int main() {
    char str[100];

    printf("Enter a str: ");
    scanf("%s", str);

    printf("str length: %d\n", strLenG(str));

    return 0;
}