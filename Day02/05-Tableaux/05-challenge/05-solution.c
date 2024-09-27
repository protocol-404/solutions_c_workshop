#include <stdio.h>

int main() {
    int tab[5];
    int nbr;
    int min = 1000;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (int i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < nbr; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    printf("min is %d\n", min);
    return 0;
}