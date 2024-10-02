#include <stdio.h>
#include <string.h>

void checkstr(char mainStr[], char subStr[]) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);
    int i, j;

    while (i < mainLen) {
        while (j < subLen) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
            j++;
        }
        if (j == subLen) {
            printf("the str is found in the main str.\n");
            return;
        }
        i++;
    }
    printf("the str is not found in the main str.\n");
}