#include <stdio.h>

int main() {
    int nombre, inverse = 0;

    printf("enter a nbr: ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        inverse = inverse * 10 + nombre % 10;
        nombre = nombre / 10;
    }

    printf("the nbr is: %d\n", inverse);

    return 0;
}
