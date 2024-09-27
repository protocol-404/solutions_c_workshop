#include <stdio.h>

int main() {
    int tab[5];
    int nbr;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (int i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < nbr; i++) {
        printf("%d\n", tab[i]);
    }
    return 0;
}