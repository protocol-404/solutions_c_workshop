#include <stdio.h>

int main() {
    int x, y, sum;

    printf("enter the first number: ");
    scanf("%d", &x);

    printf("enter the second number: ");
    scanf("%d", &y);

    sum = x + y;

    int result;

    if (x == y) {
        result = sum * 3;
        printf("=====================================\n");
        printf("the result is: %d\n", result);
        printf("=====================================\n");
    } else {
        printf("=====================================\n");
        printf("the result is: %d\n", sum);
        printf("=====================================\n");
    }

    return 0;
}