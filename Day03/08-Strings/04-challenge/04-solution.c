#include <stdio.h>

void strCompare(char str1[], char str2[]) {
    int i = 0;
    int j = 0;
    int flag = 0;

    while (str1[i] != '\0' && str2[j] != '\0') {
        if (str1[i] == str2[j]) {
            i++;
            j++;
        } else {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }
}