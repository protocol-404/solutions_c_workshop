#include "main.h"
#include <stdio.h>

void updateQuantity() {
    char updateTitle[MAX_TITLE_LENGTH];
    int newQuantity;
    int found = 0;
    
    printf("Enter the title of the book to update it: ");
    getchar();
    fgets(updateTitle, MAX_TITLE_LENGTH, stdin);
    updateTitle[strcspn(updateTitle, "\n")] = 0;
    
    int i = 0;
    while (i < book_count) {
        int title_index = i * MAX_TITLE_LENGTH;
        int j = 0;
        int match = 1;
        
        while (updateTitle[j] != '\0' && titles[title_index + j] != '\0') {
            if (updateTitle[j] != titles[title_index + j]) {
                match = 0;
                break;
            }
            j++;
        }
        
        if (match && updateTitle[j] == '\0' && titles[title_index + j] == '\0') {
            printf("Enter new quantity: ");
            scanf("%d", &newQuantity);
            quantity[i] = newQuantity;
            printf("Quantity updated :)\n");
            found = 1;
            break;
        }
        
        i++;
    }
    
    if (!found) {
        printf("Book not found.\n");
    }
}