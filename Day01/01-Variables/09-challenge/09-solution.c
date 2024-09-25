#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2;
    int y1, y2;
    int z1, z2;

    printf("Enter first coordinate (x1): ");
    scanf("%d", &x1);

    printf("Enter second coordinate (x2): ");
    scanf("%d", &x2);

    printf("Enter first coordinate (y1): ");
    scanf("%d", &y1);

    printf("Enter second coordinate (y2): ");
    scanf("%d", &y2);

    printf("Enter first coordinate (z1): ");
    scanf("%d", &z1);

    printf("Enter second coordinate (z2): ");
    scanf("%d", &z2);

    int sub1, sub2, sub3;
    float distance;

    sub1 = x1 - x2;
    sub2 = y1 - y2;
    sub3 = z1 - z2;

    distance = sqrt(pow(sub1, 2) + pow(sub2, 2) + pow(sub3, 2));

    printf("\n=====================================\n");
    printf("Calculated Distance: %.2f\n", distance);
    printf("=====================================\n");

    return 0;
}
