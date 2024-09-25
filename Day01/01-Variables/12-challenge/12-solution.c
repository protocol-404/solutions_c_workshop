#include <stdio.h>

int main() {
    int num, swap;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    swap = ((num % 10) * 1000 +
            ((num / 10) % 10) * 100 +
            ((num / 100) % 10) * 10 +
            (num / 1000));

    printf("\n=====================================\n");
    printf("The reverse of %d is %d\n", num, swap);
    printf("=====================================\n");

    return 0;
}
