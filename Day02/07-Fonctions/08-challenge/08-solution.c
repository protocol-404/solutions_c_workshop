#include <stdio.h>

int oddevenFunc(int num) {
    if (num % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

void printOddEven(int num) {
    if (oddevenFunc(num) == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
}
