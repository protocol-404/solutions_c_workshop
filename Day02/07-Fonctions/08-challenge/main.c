#include <stdio.h>

int oddevenFunc(int num);
void printOddEven(int num);

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    printOddEven(num);

    return 0;
}