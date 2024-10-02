#include <stdio.h>

int charOcc(char str[], char ch) {
    int i = 0, count = 0;
    
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }
    return count;
}
