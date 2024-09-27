#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("sum of %d nbr is %d\n", n, sum);
    return 0;
}