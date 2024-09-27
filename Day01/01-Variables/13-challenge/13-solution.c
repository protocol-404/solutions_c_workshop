#include <stdio.h>

int main() {
    int binaryNum[32];
    int num, n, i, j;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Binary: ");

    n = num;
    i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    j = i - 1;
    while (j >= 0) {
        printf("%d", binaryNum[j]);
        j--;
    }

    printf("\n");

    return 0;
}
