#include <stdio.h>

int main() {
    char x;

    printf("enter a character: ");
    scanf(" %c", &x);

    if (x >= 65 && x <= 90) {
        printf("the character is a capital letter.\n");
    } else if (x >= 97 && x <= 122) {
        printf("the character is not a capital letter.\n");
    } else {
        printf("the character is not a letter.\n");
    }

    return 0;
}
