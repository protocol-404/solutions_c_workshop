#include <stdio.h>

int factorialFunction(int n);

int main() {
    int n;

    printf("enter a number: ");
    scanf("%d", &n);

    int result = factorialFunction(n);

    printf("result is %d\n", result);

    return 0;
}