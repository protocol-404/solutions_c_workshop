#include "main.h"

int search_book(char title[]) {
    int i = 0;
    while (i < book_count) {
        int title_index = i * MAX_TITLE_LENGTH;
        int j = 0;
        while (title[j] != '\0' && titles[title_index + j] != '\0' && title[j] == titles[title_index + j]) {
            j++;
        }
        if (title[j] == '\0' && titles[title_index + j] == '\0') {
            return i;
        }
        i++;
    }
    return -1;
}