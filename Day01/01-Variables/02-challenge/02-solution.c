#include <stdio.h>

int main() {
    float k;

    k = 273.15;

    printf("Enter your temperature in C: ");
    scanf("%f", &k);

    float converter;
    converter = k + 273.15;

    printf("\n=====================================\n");
    printf("Temperature in Kelvin: %.2f K\n", converter);
    printf("=====================================\n");

    return 0;
}
