#include <stdio.h>

int main() {
    int x;

    printf("enter a number: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("the number is positive.\n");
    } else if (x < 0) {
        printf("the number is negative.\n");
    } else {
        printf("the number is zero.\n");
    }

    return 0;
}