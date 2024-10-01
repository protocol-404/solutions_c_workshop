# LibraTrack Book Inventory System

## Overview

LibraTrack is a simple yet powerful command-line book inventory management system written in C. It allows librarians or bookstore owners to keep track of their book inventory efficiently because counting books by hand is so last century! This mini-project comes recommended by YouCode School, where we believe that organizing your books should be as easy as a cat falling off a bookshelf. So grab your compiler and let’s make book chaos a thing of the past!

```
 _      _ _             _____               _    
| |    (_) |           |_   _|             | |   
| |     _| |__  _ __ __ _| |  _ __ __ _  ___| | __
| |    | | '_ \| '__/ _` | | | '__/ _` |/ __| |/ /
| |____| | |_) | | | (_| | | | | | (_| | (__|   < 
|______|_|_.__/|_|  \__,_\_/ |_|  \__,_|\___|_|\_\

          --Book Inventory System--
          |---- By: Protocol -----|
```

## Features

1. Add new books to the inventory
2. Display all books in the inventory
3. Search for a book by title
4. Update the quantity of a book
5. Delete a book from the inventory
6. Display the total number of books in stock

## File Structure

- `main.h`: Header file with function prototypes and global variable declarations
- `main.c`: Main program file with the menu loop
- `01-addBook.c`: Functions for adding a new book
- `02-displayBook.c`: Functions for displaying all books
- `03-searchBook.c`: Functions for searching a book
- `04-updateBook.c`: Functions for updating book quantity
- `05-deleteBook.c`: Functions for deleting a book
- `06-totalBook.c`: Functions for calculating total books in stock

## Compilation

To compile the program use the following command in the terminal:

```
gcc main.c 01-addBook.c 02-displayBook.c 03-searchBook.c 04-updateBook.c 05-deleteBook.c 06-totalBook.c disTitle.c -o libratrack
```

This will create an executable named `libratrack`.

## Usage

To run the program, use the following command:

```
./libratrack
```

Follow the on-screen menu to navigate through different functionalities.

## Contributing

This is a mini-project created for educational purposes because who wouldn’t want to learn while simultaneously avoiding real work? Feel free to fork and extend its functionality! Just remember, the ultimate goal is to impress your teacher, not to build a robot that takes over the world… yet!