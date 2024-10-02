#include <stdio.h>

int strLen(char str[]);
char strReverse(char str[]);

int main() {
    char str[100];

    printf("Enter a str: ");
    scanf("%s", str);

    printf("str reverse: ");
    strReverse(str);
    printf("%s\n", str);

    return 0;
}