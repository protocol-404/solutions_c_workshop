#include "main.h"

int total_books() {
    int total = 0;
    int i = 0;
    while (i < book_count) {
        total += quantity[i];
        i++;
    }
    return total;
}