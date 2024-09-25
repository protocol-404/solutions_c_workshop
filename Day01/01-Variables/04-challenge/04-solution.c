#include <stdio.h>

int main() {
    float x, y;

    // y = 1000;

    printf("Enter your speed in kilometers per hour (km/h): ");
    scanf("%f", &x);

    y = x * 1000;
        
    float converter;
    converter = y / 3600;

    printf("\n=====================================\n");
    printf("Speed in meters per second: %.2f m/s\n", converter);
    printf("=====================================\n");

    return 0;
}
