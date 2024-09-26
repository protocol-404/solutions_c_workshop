#include <stdio.h>

int main() {
    int daysU, daysV, imployer;

    printf("enter nbr of days of vacation do u have: ");
    scanf("%d", &daysV);

    printf("enter nbr of days of vacation do u use: ");
    scanf("%d", &daysU);

    printf("enter nbr of imployers: \n");
    printf("0- full-time employee\n");
    printf("1- part-time employee\n");
    printf("enter your choice: ");
    scanf("%d", &imployer);

    int result;

    if (imployer == 0) {
        result = daysV - daysU;
        if (result > 0) {
            printf("you can take %d days of vacation.\n", result);
        } else if (result == 0) {
            printf("you should come back to work.\n");
        } else {
            printf("you take use more than you have you're fired from the job.\n");
        }
    } else if (imployer == 1) {
        result = (daysV / 2) - daysU;
        if (result > 0) {
            printf("you can take %d days of vacation.\n", result);
        } else if (result == 0) {
            printf("you should come back to work.\n");
        } else {
            printf("you take use more than you have you're fired from the job.\n");
        }
    } else {
        printf("invalid imployer.\n");
    }

    return 0;
}