#include <stdio.h>

void ignoreSpace(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    ignoreSpace(str);

    return 0;
}