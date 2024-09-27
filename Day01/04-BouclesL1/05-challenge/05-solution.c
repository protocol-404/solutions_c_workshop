#include <stdio.h>

int main() {
    int base, power;

    printf("enter a base: ");
    scanf("%d", &base);

    printf("enter an power: ");
    scanf("%d", &power);
    
    int result = 1;

    for (int i = 1; i <= power; i++) {
        result *= base;
    }


    printf("result is %d\n", result);
    return 0;
}