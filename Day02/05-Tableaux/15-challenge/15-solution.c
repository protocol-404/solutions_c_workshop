#include <stdio.h>

int main() {
    int tab1[80];
    int tab2[80];
    int nbr1, nbr2, i, j;

    printf("enter nbr of elements in tab1: ");
    scanf("%d", &nbr1);

    for (i = 0; i < nbr1; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab1[i]);
    }

    printf("enter nbr of elements in tab2: ");
    scanf("%d", &nbr2);

    for (i = 0; i < nbr2; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab2[i]);
    }

    for (i = 0; i < nbr1 + nbr2; i++) {
        if (i < nbr1) {
            tab1[i] = tab1[i];
        } else {
            tab1[i] = tab2[i - nbr1];
        }
    }

    printf("merged table: [");
    for (i = 0; i < nbr1 + nbr2; i++) {
        if (i == nbr1 + nbr2 - 1)
            printf("%d", tab1[i]);
        else
            printf("%d, ", tab1[i]);
    }
    printf("]\n");
    // printf("\n");

    return 0;
}