#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imaginaryPart;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Deux solutions réelles et distinctes
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions sont %.2lf et %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // Une solution réelle double
        root1 = -b / (2 * a);
        printf("La solution double est %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Les solutions complexes sont %.2lf + %.2lfi et %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;
    printf("Entrez les coefficients a, b et c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Ce n'est pas une équation du deuxième degré.\n");
    } else {
        solveQuadraticEquation(a, b, c);
    }

    return 0;
}
