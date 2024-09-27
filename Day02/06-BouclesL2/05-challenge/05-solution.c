#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("enter nbr: ");
    scanf("%d", &n);
    
    i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("the sum of %d nbr is %d\n", n, sum);

    return 0;
}
