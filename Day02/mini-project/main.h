#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 50
#define MAX_AUTHOR_LENGTH 50

extern char titles[MAX_BOOKS * MAX_TITLE_LENGTH];
extern char authors[MAX_BOOKS * MAX_AUTHOR_LENGTH];
extern float prices[MAX_BOOKS];
extern int quantity[MAX_BOOKS];
extern int book_count;

void add_book();
void display_books();
void delete_book(char title[]);
void updateQuantity();
void display_title();

int search_book(char title[]);
int total_books();

#endif