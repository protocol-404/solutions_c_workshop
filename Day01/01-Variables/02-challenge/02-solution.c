#include <stdio.h>

int main(){

    float k;

    k = 273.15;

    printf("Enter ur temperatur on C: ");
    scanf("%f", &k);

    float converter;

    converter = k + 273.15;

    printf("%f\n", converter);
}