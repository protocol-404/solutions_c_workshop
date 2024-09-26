// Écrivez un programme C qui demande un nombre entier n à l’utilisateur et calcule la somme des n premiers nombres naturels. Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10.

#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("sum of %d nbr is %d\n", n, sum);
    return 0;
}