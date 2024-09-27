#include <stdio.h>

int main() {
    int lines;
    int starts = 1;
    int x, y, spaces;

    printf("enter the nbr of lines: ");
    scanf("%d", &lines);

    x = 0;
    while (x < lines) {
        spaces = lines - x - 1;
        y = 0;
        while (y < spaces) {
            printf(" ");
            y++;
        }

        y = 0;
        while (y < starts) {
            printf("*");
            y++;
        }

        printf("\n");

        starts += 2;
        x++;
    }
    return 0;
}

