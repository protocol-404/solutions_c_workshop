#include <stdio.h>

int main() {
    int nbr;

    printf("enter ur nbr : ");
    scanf("%d", &nbr);

    int i = 10; 
    while (i >= 1) {
        printf("%d * %d = %d\n", nbr, i, nbr * i);
        i--;
    }

    return 0;
}
