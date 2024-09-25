#include <stdio.h>


int main() {
    char x;

    printf("enter a character: ");
    scanf(" %c", &x);

    switch (x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("the character is a vowel.\n");
            break;
        default:
            printf("the character is not a vowel.\n");
            break;
    }

    return 0;
}


// int main() {
//     char x;

//     printf("enter a character: ");
//     scanf(" %c", &x);

//     if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
//         x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
//         switch (x) {
//             case 'a':
//             case 'A':
//                 printf("the character is a vowel.\n");
//                 break;
//             case 'e':
//             case 'E':
//                 printf("the character is a vowel.\n");
//                 break;
//             case 'i':
//             case 'I':
//                 printf("the character is a vowel.\n");
//                 break;
//             case 'o':
//             case 'O':
//                 printf("the character is a vowel.\n");
//                 break;
//             case 'u':
//             case 'U':
//                 printf("the character is a vowel.\n");
//                 break;
//             default:
//                 break;
//         }
//     } else {
//         printf("the character is not a vowel.\n");
//     }

//     return 0;
// }
