#include <stdio.h>

int main() {
    int tab[80];
    int nbr, i;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < nbr; i++) {
        printf("%d ", tab[nbr - i - 1]);
    }

    printf("\n");
    printf("reversed: ");
    printf("[");
    for (i = 0; i < nbr; i++) {
        if (i == nbr - 1)
            printf("%d", tab[i]);
        else
            printf("%d, ", tab[i]);
    }
    printf("]\n");
    // printf("\n");
    
    return 0;
}