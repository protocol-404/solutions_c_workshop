#include <stdio.h>

int main() {
    int x;
    int fact = 1;

    printf("enter a number: ");
    scanf("%d", &x);
    if (x > 0) {
        for (int i = x; i > 0; i--) {
            fact *= i;
        }
        printf("facotial of %d is %d\n", x, fact);
    }
    return 0;
}