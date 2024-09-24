#include <stdio.h>

int main(){

    float x, y;

    // y = 1000;

    printf("Enter ur distence on km/h: ");
    scanf("%f", &x);

    y = x * 1000;
        
    float converter;

    converter = y / 3600;

    printf("%f\n", converter);
}