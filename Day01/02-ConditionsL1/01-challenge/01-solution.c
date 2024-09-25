#include <stdio.h>

int main() {
    int x, y;

    printf("enter a number: ");
    scanf("%d", &x);

    y = x % 2;

    if (y == 0) {
        printf("the number is even.\n");
    } else {
        printf("the number is odd.\n");
    }

    return 0;
}