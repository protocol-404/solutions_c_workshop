#include <stdio.h>
#include <string.h>

int main() {
    int day, year;
    int mIndex;
    char month[10];
    // char months[12][3] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char output[20];

    printf("enter ur date in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &mIndex, &year);

    strcpy(month, months[mIndex - 1]);
    printf("the date is: %d-%s-%d\n", day, month, year);

    return 0;
}
