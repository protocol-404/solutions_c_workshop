#include <stdio.h>

int main() {
    int tab1[80];
    int tab2[80];
    int nbr;
    int i;

    printf("enter nbr of elements: ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &tab1[i]);
    }

    for (i = 0; i < nbr; i++) {
        tab2[i] = tab1[i];
    }


    printf("original: ");

    for (i = 0; i < nbr; i++) {
        if (i == nbr - 1) 
            printf("%d.", tab1[i]);
        else
            printf("%d, ", tab1[i]);
         
    }

    printf("\n");
    printf("copied: ");

    for (i = 0; i < nbr; i++) {
        if (i == nbr - 1)
            printf("%d.", tab2[i]);
        else
            printf("%d, ", tab2[i]);
    }
    printf("\n");

    return 0;
}
