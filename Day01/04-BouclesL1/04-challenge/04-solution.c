#include <stdio.h>

int main() {
    int n;
    int i = 1;

    printf("enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < 10; i++) {
        if (i % 2 != 0) {
            printf("%d", i);
            if (i == 9) {
                break;
            }
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}