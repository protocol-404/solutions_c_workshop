#include <stdio.h>

int mulFunction(int a, int b);

int main() {
    int a, b;
    int result;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    result = mulFunction(a, b);

    printf("result is %d\n", result);

    return 0;
}