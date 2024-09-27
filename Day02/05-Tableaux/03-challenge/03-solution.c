#include <stdio.h>

int main() {
    int tab[5];
    int nbr;
    int somme = 0;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (int i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    printf("sum is %d\n", somme);
    return 0;
}