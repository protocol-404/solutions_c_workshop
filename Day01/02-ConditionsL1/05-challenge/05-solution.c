#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("=====================================\n");
    printf("Choice what you want to convert to:\n");
    printf("1- month\n");
    printf("2- week\n");
    printf("3- days\n");
    printf("4- hours\n");
    printf("5- minutes\n");
    printf("6- seconds\n");
    printf("7- exit\n");
    printf("=====================================\n");

    int choice;
    printf("enter ur choice: ");
    scanf("%d", &choice);

    printf("=====================================\n");
    if (choice == 1) {
        printf("the %d year is %d in months.\n", year, year * 12);
    } else if (choice == 2) {
        printf("the %d year is %d in weeks.\n", year, year * 52);
    } else if (choice == 3) {
        printf("the %d year is %d in days.\n", year, year * 365);
    } else if (choice == 4) {
        printf("the %d year is %d in hours.\n", year, year * 8760);
    } else if (choice == 5) {
        printf("the %d year is %d in minutes.\n", year, year * 525600);
    } else if (choice == 6) {
        printf("the %d year is %d in seconds.\n", year, year * 31536000);
    } else if (choice == 7) {
        printf("see you soon!\n");
    }
    printf("=====================================\n");

    return 0;
}