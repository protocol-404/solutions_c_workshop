#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;

    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);
    printf("Enter 3rd number: ");
    scanf("%d", &z);

    float power;
    int mul;
    double result;

    power = 1.0 / 3.0;

    mul = x * y * z;

    result = pow(mul, power);

    printf("Geometric mean = %f\n", result);

    return 0;
}