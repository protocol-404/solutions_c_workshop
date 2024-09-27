#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("enter ur nbr: ");
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        printf("%d ", fibonacci(i));
        i++;
    }
    printf("\n");

    return 0;
}