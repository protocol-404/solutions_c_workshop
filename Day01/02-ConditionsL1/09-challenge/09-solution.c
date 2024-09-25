#include <stdio.h>

int main() {
    char x;

    printf("Enter a character: ");
    scanf(" %c", &x);

    if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122)) {
        if (x >= 'A' && x <= 'Z') {
            printf("=====================================\n");
            printf("The character is an uppercase letter.\n");
            printf("=====================================\n");
        } else {
            printf("=====================================\n");
            printf("The character is a lowercase letter.\n");
            printf("=====================================\n");
        }
    } else {
        printf("=====================================\n");
        printf("The character is not a letter.\n");
        printf("=====================================\n");
    
    }

    // if (x >= 'A' && x <= 'Z') {
    //     printf("The character is a uppercase letter.\n");
    // } else if (x >= 'a' && x <= 'z') {
    //     printf("The character is a lowercase letter.\n");
    // } else {
    //     printf("The character is not a letter.\n");
    // }

    return 0;
}