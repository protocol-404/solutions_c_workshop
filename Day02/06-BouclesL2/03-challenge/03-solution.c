#include <stdio.h>

int main() {
    int n, i, j;
    int is_prim;

    printf("enter a : ");
    scanf("%d", &n);

    printf("the nbr primary %d is : \n", n);

    i = 2;
    while (i <= n) {
        is_prim = 1;

        j = 2;
        while (j * j <= i) {
            if (i % j == 0) {
                is_prim = 0;
                break;
            }
            j++;
        }

        if (is_prim) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}
