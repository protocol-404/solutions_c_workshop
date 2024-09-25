#include <stdio.h>

int main() {
    float y;

    printf("Enter your distance in kilometers: ");
    scanf("%f", &y);

    float converter;
    converter = y * 1093.61;

    printf("\n=====================================\n");
    printf("Distance in yards: %.2f yd\n", converter);
    printf("=====================================\n");

    return 0;
}
