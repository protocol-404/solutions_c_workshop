#include <stdio.h>

int strLen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char strReverse(char str[]) {
    int len = strLen(str);
    int i = 0;
    
    while (i < len / 2) {
        char temp; 
        
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        
        i++;
    }
}
