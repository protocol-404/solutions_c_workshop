#include <stdio.h>

int charOcc(char str[], char ch);

int main() {
    char str[100];
    char ch;

    printf("enter ur str: ");
    scanf("%s", str);

    printf("enter ur char: ");
    scanf(" %c", &ch);

    int count = charOcc(str, ch);
    printf("the character '%c' repeted %d time in the str.\n", ch, count);


    return 0;
}