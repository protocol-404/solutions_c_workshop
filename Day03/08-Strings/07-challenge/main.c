#include <stdio.h>

void ConvertToUpper(char str[]);

int main() {
    char str[100];

    printf("Enter a str: ");
    scanf("%s", str);

    printf("str convert to upper: ");
    ConvertToUpper(str);
    printf("%s\n", str);

    return 0;
}