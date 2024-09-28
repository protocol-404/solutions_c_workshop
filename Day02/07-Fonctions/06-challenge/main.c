#include <stdio.h>

int fibonacciFunction(int n);

int main() {
    int n;

    printf("enter a number: ");
    scanf("%d", &n);

    int result = fibonacciFunction(n);

    printf("result is %d\n", result);

    return 0;
}