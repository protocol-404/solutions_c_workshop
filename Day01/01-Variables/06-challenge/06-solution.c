#include <stdio.h>

int main() {
    int a, b;

    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    int add, sub, mul;
    float div;

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;

    printf("\n=====================================\n");
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %.2f\n", a, b, div);
    printf("=====================================\n");

    return 0;
}
