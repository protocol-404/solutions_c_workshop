#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int day;

    srand(time(NULL));
    day = rand() % 7 + 1;

    if (day == 1) {
        printf("Monday\n");
    } else if (day == 2) {
        printf("Tuesday\n");
    } else if (day == 3) {
        printf("Wednesday\n");
    } else if (day == 4) {
        printf("Thursday\n");
    } else if (day == 5) {
        printf("Friday\n");
    } else if (day == 6) {
        printf("Saturday\n");
    } else if (day == 7) {
        printf("Sunday\n");
    }
    return 0;
}
