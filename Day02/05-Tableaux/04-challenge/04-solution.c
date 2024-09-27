#include <stdio.h>

int main() {
    int tab[5];
    int nbr;
    int max = 0;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (int i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < nbr; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    printf("max is %d\n", max);
    return 0;
}