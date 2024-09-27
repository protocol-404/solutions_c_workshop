#include <stdio.h>

int main() {
    int tab[5];
    int nbr;
    int i;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < nbr; i++) {
        for (int j = i + 1; j < nbr; j++) {
            if (tab[i] > tab[j]) {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    for (i = 0; i < nbr; i++) {
        printf("%d\n", tab[i]);
    }

    return 0;
}