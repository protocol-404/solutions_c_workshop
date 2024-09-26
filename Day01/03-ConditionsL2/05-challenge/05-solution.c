#include <stdio.h>

int main() {
    float budget;
    int distination, person;

    printf("enter ur budget (in euros): ");
    scanf("%f", &budget);

    printf("enter ur distination (1-3): ");
    printf("1- beach\n");
    printf("2- Mountain\n");
    printf("3- city\n");
    scanf("%d", &distination);

    printf("enter ur number of person: ");
    scanf("%d", &person);

    if (budget >= 1000) {
        printf("high-end voyage\n");
    } else if (budget >= 500) {
        printf("medium-end voyage\n");
    } else {
        printf("low-end voyage\n");
    }

    switch(distination) {
        case 1:
            printf("distination: beach\n");
            break;
        case 2:
            printf("distination: Mountain\n");
            break;
        case 3:
            printf("distination: city\n");
            break;
        default:
            printf("distination: unknown\n");
            break;
    }
    printf("nbr of person: %d\n", person);

    return 0;
}
