#include "main.h"
#include <stdio.h>

char titles[MAX_BOOKS * MAX_TITLE_LENGTH];
char authors[MAX_BOOKS * MAX_AUTHOR_LENGTH];
float prices[MAX_BOOKS];
int quantity[MAX_BOOKS];
int book_count = 0;

int main() {
    int choice;
    char title[MAX_TITLE_LENGTH];
    int new_quantity;

    display_title();

    while (1) {
        printf("\033[1;36m");
        printf("\nBook Inventory Management\n");

        printf("\033[0;33m");
        printf("1. Add a book\n");

        printf("\033[0;33m");
        printf("2. Display all books\n");

        printf("\033[0;33m");
        printf("3. Search for a book\n");

        printf("\033[0;33m");
        printf("4. Update book quantity\n");

        printf("\033[0;33m");
        printf("5. Delete a book\n");

        printf("\033[0;33m");
        printf("6. Display total books in stock\n");

        printf("\033[0;31m");
        printf("7. Exit\n");

        printf("\n");
        printf("\033[0;32m");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                printf("Enter book title to search: ");
                scanf(" %[^\n]", title);
                int index = search_book(title);
                if (index != -1) {
                    printf("Book found at index %d\n", index + 1);
                } else {
                    printf("Book not found\n");
                }
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                printf("Enter book title to delete: ");
                scanf(" %[^\n]", title);
                delete_book(title);
                break;
            case 6:
                printf("Total books in stock: %d\n", total_books());
                break;
            case 7:
                printf("sad but true time to say goodbye :(\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}