#include <stdio.h>

void strDisplay(char str[]);

int main() {
    char str[100];

    printf("enter a str: ");
    scanf("%s", str);

    printf("str display: ");
    strDisplay(str);

    return 0;
}