#include <stdio.h>

int main(){
    int a, b;

    printf("Enter ur first nbr: ");
    scanf("%d", &a);

    printf("Enter ur secound nbr: ");
    scanf("%d", &b);

    int add, sub, mul;
    float div;

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %f\n", a, b, div);
}