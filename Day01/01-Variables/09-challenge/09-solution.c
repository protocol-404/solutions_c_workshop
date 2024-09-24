#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2;
    int y1, y2;
    int z1, z2;

    printf("Enter nbr: ");
    scanf("%d", &x1);

    printf("Enter nbr: ");
    scanf("%d", &x2);

    printf("Enter nbr: ");
    scanf("%d", &y1);

    printf("Enter nbr: ");
    scanf("%d", &y2);

    printf("Enter nbr: ");
    scanf("%d", &z1);

    printf("Enter nbr: ");
    scanf("%d", &z2);

    int sub1, sub2, sub3;
    float distance;

    sub1 = x1 - x2;
    sub2 = y1 - y2;
    sub3 = z1 - z2;

    distance = sqrt(pow(sub1, 2) + pow(sub2, 2) + pow(sub3, 2));

    printf("ur Distance: %f\n", distance);
}