#include <stdio.h>
#include <math.h>

int main(){
    float nbr, pi, r;

    nbr = 4 / 3;
    pi = 3.14159;

    printf("Enter ur sphère: ");
    scanf("%f", &r);

    float volume;

    volume = nbr * pi * pow(r, 3);


    printf("ur volume is: %f\n", volume);
}