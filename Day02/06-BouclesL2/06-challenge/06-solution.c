#include <stdio.h>

int main() {
    int n, i = 1;

    printf("enter nbr: ");
    scanf("%d", &n);

    printf("the factors of %d is: ", n);

    while (i <= n) {
        if (n % i == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}
