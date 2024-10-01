#include "main.h"
#include <stdio.h>

void display_books() {
    if (book_count == 0) {
        printf("Oopsie the inventory is empty :(\n"); 
        return;
    }

    printf("\nBook Inventory:\n");
    printf("%-50s %-50s %-10s %-10s\n", "Title", "Author", "Price", "Quantity");
    printf("-------------------------------------------------------------------------------------\n");

    int i = 0;
    while (i < book_count) {
        int title_index = i * MAX_TITLE_LENGTH;
        int author_index = i * MAX_AUTHOR_LENGTH;
        printf("%-50s %-50s %-10.2f %-10d\n", &titles[title_index], &authors[author_index], prices[i], quantity[i]);
        i++;
    }
}