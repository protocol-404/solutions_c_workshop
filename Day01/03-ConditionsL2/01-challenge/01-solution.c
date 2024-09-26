#include <stdio.h>

int main() {
    int revenue, score;

    printf("enter the revenue: ");
    scanf("%d", &revenue);

    printf("=====================================\n");

    printf("enter the score: ");
    scanf("%d", &score);

    int sold;

    // bonus = 1000;
    sold = 30000;

    if ((revenue >= sold) && (score >= 700)) {
        printf("=====================================\n");
        printf("you are eligible for the bonus.\n");
        printf("=====================================\n");
    } else if ((revenue >= sold) && ((score >= 650) && (score < 700))) {
        printf("=====================================\n");
        printf("you are eligible for the bonus but with condition.\n");
        printf("=====================================\n");
    } else {
        printf("=====================================\n");
        printf("you are not eligible for the bonus.\n");
        printf("=====================================\n");
    }
}