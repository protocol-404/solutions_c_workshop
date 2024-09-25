#include <stdio.h>

int main() {
    float x;

    printf("Enter your temperature in C: ");
    scanf("%f", &x);

    if (x < 0) {
        printf("The water is solid.\n");
    } else if (x > 100) {
        printf("The water is gas.\n");
    } else {
        printf("The water is liquid.\n");
    }

    return 0;
}
