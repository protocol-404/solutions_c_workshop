#include <stdio.h>

int main(){

    float y;

    y = 273.15;

    printf("Enter ur distence on km: ");
    scanf("%f", &y);

    float converter;

    converter = y * 1093.61;

    printf("%f\n", converter);
}