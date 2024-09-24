#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the first nbr: ");
    scanf("%d", &a);
    printf("Enter the second nbr: ");
    scanf("%d", &b);
    printf("Enter the theerd nbr: ");
    scanf("%d", &c);

    int sum1 = (a * 2.0);
    int sum2 = (b * 3.0);
    int sum3 = (c * 5.0);

    int sum = sum1 + sum2 + sum3;

    printf("The average of three nbrs is: %d", sum);

    return 0;
}