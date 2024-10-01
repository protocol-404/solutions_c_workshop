#include "main.h"
#include <stdio.h>

void delete_book(char title[]) {
    int index = search_book(title);
    if (index != -1) {
        int i = index;
        while (i < book_count - 1) {
            int j = 0;
            int curr_title_index = i * MAX_TITLE_LENGTH;
            int next_title_index = (i + 1) * MAX_TITLE_LENGTH;
            int curr_author_index = i * MAX_AUTHOR_LENGTH;
            int next_author_index = (i + 1) * MAX_AUTHOR_LENGTH;
            
            while (j < MAX_TITLE_LENGTH) {
                titles[curr_title_index + j] = titles[next_title_index + j];
                j++;
            }
            
            j = 0;
            while (j < MAX_AUTHOR_LENGTH) {
                authors[curr_author_index + j] = authors[next_author_index + j];
                j++;
            }
            
            prices[i] = prices[i+1];
            quantity[i] = quantity[i+1];
            i++;
        }
        book_count--;
        printf("Book deleted successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}