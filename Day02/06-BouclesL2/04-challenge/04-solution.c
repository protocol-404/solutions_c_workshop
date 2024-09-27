#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("enter nbr more than 2: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("the nbr rev: %d\n", rev);

    return 0;
}
