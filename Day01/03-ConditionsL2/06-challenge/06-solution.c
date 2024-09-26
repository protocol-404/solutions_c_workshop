#include <stdio.h>

int main() {
    float kwh;
    int choice1, choice2;

    printf("enter ur consomation (in kWh): ");
    scanf("%f", &kwh);

    printf("enter ur choice (0-1): \n");
    printf("0- resedensw\n");
    printf("1- commercial\n");
    scanf("%d", &choice1);

    printf("enter ur choice (0-1): \n");
    printf("0- standard\n");
    printf("1- reduce\n");
    scanf("%d", &choice2);

    // hado resedense bax mantlfx
    float taxRS , taxRR;
    taxRS = 0.20;
    taxRR = 0.15;

    // hado commercial bax mantlfx
    float taxCS, taxCR;
    taxCS = 0.30;
    taxCR = 0.25;

    float total;

    (float)kwh;

    if (choice1 == 0) {
        if (choice2 == 0) {
            total = kwh * taxRS;
            printf("total tax: %.2f€ \n", total);
        }
        else if (choice2 == 1) {
            total = kwh * taxRR;
            printf("total tax: %.2f€ \n", total);
        }
        else {
            printf("invalid choice\n");
        }
    } else if (choice1 == 1) {
        if (choice2 == 0) {
            total = kwh * taxCS;
            printf("total tax: %.2f€ \n", total);
        }
        else if (choice2 == 1) {
            total = kwh * taxCR;
            printf("total tax: %.2f€ \n", total);
        }
        else {
            printf("invalid choice\n");
        }
    } else {
        printf("invalid choice\n");
    }

    return 0;
}
