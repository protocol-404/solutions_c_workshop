#include <stdio.h>

void checkstr(char mainStr[], char subStr[]);

int main() {
    char mainStr[100], subStr[100];

    printf("Enter the main str: ");
    scanf("%s", mainStr);

    printf("Enter the str: ");
    scanf("%s", subStr);

    checkstr(mainStr, subStr);

    return 0;
}
