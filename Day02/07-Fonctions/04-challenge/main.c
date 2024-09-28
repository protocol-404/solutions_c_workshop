#include <stdio.h>

int mminFunction(int a, int b);

int main() {
    int a, b;
    int result;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    result = mminFunction(a, b);

    printf("result is %d\n", result);

    return 0;
}