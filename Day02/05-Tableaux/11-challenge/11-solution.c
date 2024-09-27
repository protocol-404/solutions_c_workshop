#include <stdio.h>

int main() {
    int tab[80];
    int nbr, i, element, new;


    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    printf("enter element to search: ");
    scanf("%d", &element);

    printf("enter new value: ");
    scanf("%d", &new);

    for (i = 0; i < nbr; i++) {
        if (tab[i] == element) {
            tab[i] = new;
        }
    }

    for (i = 0; i < nbr; i++) {
        if (i == nbr - 1)
            printf("%d", tab[i]);
        else
            printf("%d, ", tab[i]);
    }

    printf("\n");

    return 0;
}