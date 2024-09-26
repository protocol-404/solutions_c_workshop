#include <stdio.h>

int main() {
    int x;
    int nbr = 0;

    printf("enter nbr: ");
    scanf("%d", &x);

    while (x != 0) {
        x = x / 10;
        nbr++;
    }

    printf("nbr of digits is %d\n", nbr);
    return 0;
}