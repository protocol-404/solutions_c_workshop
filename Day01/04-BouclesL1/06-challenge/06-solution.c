#include <stdio.h>

int main() {
    int x;

    printf("enter a number: ");
    scanf("%d", &x);

    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            printf("%d", i);
            if (i == 8) {
                break;
            }
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}