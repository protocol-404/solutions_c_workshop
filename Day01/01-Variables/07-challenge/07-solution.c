#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);

    float sum1, sum2, sum3;

    sum1 = (x * 2.0);
    sum2 = (y * 3.0);
    sum3 = (z * 5.0);

    float sum, average;

    sum = sum1 + sum2 + sum3;
    average = sum / 10.0;

    printf("\n=====================================\n");
    printf("The average of the three numbers is: %.2f\n", average);
    printf("=====================================\n");

    return 0;
}
