#include <stdio.h>

int factorialFunction(int n) {
    if (n == 0) {
        return 1;
    }

    int i = 1, result = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}