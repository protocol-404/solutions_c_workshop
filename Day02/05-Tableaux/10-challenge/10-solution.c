#include <stdio.h>

int main() {
    int tab[80];
    int nbr, i, element, rslt;


    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab[i]);
    }

    printf("enter element to search: ");
    scanf("%d", &element);

    rslt = 0;
    for (i = 0; i < nbr; i++) {
        if (tab[i] == element) {
            rslt = 1;
            break;
        }
    }

    if (rslt == 1) {
        printf("element found\n");
    } else {
        printf("element not found\n");
    }

    return 0;
}