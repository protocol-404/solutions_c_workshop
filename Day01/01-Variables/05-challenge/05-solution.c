#include <stdio.h>

int main(){
    float x;

    printf("Enter ur temperator");
    scanf("%f", &x);

    if (x < 0) {
        printf("the watter is Solide");
    } else if (x > 100) {
        printf("the watter is Gaz");
    } else {
        printf("the watter is Liquide");
    }
}