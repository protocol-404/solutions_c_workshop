#include <stdio.h>

int main() {
    float length, width, surface;

    printf("Entrez la longueur du rectangle: ");
    scanf("%f", &length);

    printf("Entrez la largeur du rectangle: ");
    scanf("%f", &width);

    surface = length * width;
    printf("\n=====================================\n");
    printf("La surface du rectangle est: %.2f\n", surface);
    printf("=====================================\n");

    return 0;
}
