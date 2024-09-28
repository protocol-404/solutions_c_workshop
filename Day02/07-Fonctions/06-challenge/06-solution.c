#include <stdio.h>

int fibonacciFunction(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciFunction(n - 1) + fibonacciFunction(n - 2);
    }
}