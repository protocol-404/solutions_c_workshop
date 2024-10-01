#include "main.h"
#include <stdio.h>

void add_book() {
    if (book_count >= MAX_BOOKS) {
        printf("Error: you can't add more of books\n");
        return;
    }

    int index = book_count * MAX_TITLE_LENGTH;
    printf("Enter your book title: ");
    scanf(" %[^\n]", &titles[index]);

    index = book_count * MAX_AUTHOR_LENGTH;
    printf("Enter author name: ");
    scanf(" %[^\n]", &authors[index]);

    printf("Enter book price: ");
    scanf("%f", &prices[book_count]);

    printf("Enter quantity: ");
    scanf("%d", &quantity[book_count]);

    book_count++;
    printf("The book added successfully.\n");
}