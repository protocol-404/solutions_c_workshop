#include <stdio.h>

int main() {
    int tab[80];
    int nbr, i, element;


    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < nbr; i++) {
        if (tab[i] % 2 == 0) {
            printf("the nbr %d is even\n", tab[i]);
        }
    }
    return 0;
}