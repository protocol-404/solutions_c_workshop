#include <stdio.h>
#include <math.h>

int main() {
    float nbr, pi, r;

    nbr = 4.0 / 3.0;
    pi = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    float volume;
    volume = nbr * pi * pow(r, 3);

    printf("\n=====================================\n");
    printf("The volume of the sphere is: %.2f\n", volume);
    printf("=====================================\n");

    return 0;
}
