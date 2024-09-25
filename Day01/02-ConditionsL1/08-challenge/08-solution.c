#include <stdio.h>

int main() {
    int x;

    printf("enter a number: ");
    scanf("%d", &x);

    if (x < 10) {
        printf("you are filled try the next year\n");
    } else if (x >= 10 || x  <= 12) {
        printf("you are not filled but you can do best effort\n");
    } else if (x >= 13 || x <= 14) {
        printf("you are not filled but you can do best effort\n");
    } else if (x >= 15 || x <= 16) {
        printf("you are not filled but you can do best effort\n");
    } else {
        printf("you are the best\n");
    }

    return 0;
}