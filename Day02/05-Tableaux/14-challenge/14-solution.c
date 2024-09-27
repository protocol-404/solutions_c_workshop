#include <stdio.h>

int main() {
    int tab[80];
    int nbr, i, sum;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    sum = 0;
    for (i = 0; i < nbr; i++) {
        sum = sum + tab[i];
    }

    printf("average: %.2f\n", (float)sum / nbr);

    return 0;
}