#include <stdio.h>

void ConvertToLower(char str[]);

int main() {
    char str[100];

    printf("Enter a str: ");
    scanf("%s", str);

    printf("str convert to lower: ");
    ConvertToLower(str);
    printf("%s\n", str);

    return 0;
}