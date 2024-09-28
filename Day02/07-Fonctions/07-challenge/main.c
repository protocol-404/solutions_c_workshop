#include <stdio.h>

int strLen(char str[]);
char strReverse(char str[]);

int main() {
    char str[100];

    printf("enter your string: ");
    scanf("%s", str);
    
    strReverse(str);

    printf("reversed string: %s\n", str);

    return 0;
}