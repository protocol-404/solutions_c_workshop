#include <stdio.h>

int main() {
    float income;
    int choice1;

    printf("enter ur income (yearly): ");
    scanf("%f", &income);

    printf("enter ur choice (0-2): \n");
    printf("0- single\n");
    printf("1- married\n");
    printf("2- head of household\n");
    scanf("%d", &choice1);

    // printf("enter ur choice (0-1): \n");
    // printf("0- standard\n");
    // printf("1- reduce\n");
    // scanf("%d", &choice2);

    // hado resedense bax mantlfx
    // float taxRS , taxRR;
    // taxRS = 0.20;
    // taxRR = 0.15;

    // // hado commercial bax mantlfx
    // float taxCS, taxCR;
    // taxCS = 0.30;
    // taxCR = 0.25;

    if (choice1 == 0) {
        if (income <= 20000) {
            printf("u are single and your income %.2f : %.f€ * 5%% - 1000 = €%.2f\n", income, income, (income * 0.05) - 1000);
        } else if ((income > 20000) && (income <= 50000)) {
            printf("u are single and your income %.2f : %.f€ * 10%% - 1000 = €%.2f\n", income, income, (income * 0.1) - 1000);
        } else {
            printf("u are single and your income %.2f : %.f€ * 20%% - 1000 = €%.2f\n", income, income, (income * 0.20) - 1000);
        }
    } else if (choice1 == 1) {
        if (income <= 20000) {
            printf("u are married and your income %.2f : %.f€ * 5%% - 2000 = €%.2f\n", income, income, (income * 0.05) - 2000);
        } else if ((income > 20000) && (income <= 50000)) {
            printf("u are married and your income %.2f : %.f€ * 10%% - 2000 = €%.2f\n", income, income, (income * 0.1) - 2000);
        } else {
            printf("u are married and your income %.2f : %.f€ * 20%% - 2000 = €%.2f\n", income, income, (income * 0.20) - 2000);
        }
    } else if (choice1 == 2) {
        if (income <= 20000) {
            printf("u are head of household and your income %.2f : %.f€ * 5%% - 3000 = €%.2f\n", income, income, (income * 0.05) - 3000);
        } else if ((income > 20000) && (income <= 50000)) {
            printf("u are head of household and your income %.2f : %.f€ * 10%% - 3000 = €%.2f\n", income, income, (income * 0.1) - 3000);
        } else {
            printf("u are head of household and your income %.2f : %.f€ * 20%% - 3000 = €%.2f\n", income, income, (income * 0.20) - 3000);
        }
    } else {
        printf("invalid choice\n");
    }
    return 0;
}
