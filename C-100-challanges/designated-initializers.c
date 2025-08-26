#include<stdio.h>
#include<string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

typedef struct Book Book;

void print_book(Book *book) {
    printf("\n%s is written by %s, and is sold for Rs%.2f", book->title, book->author, book->price);
}

int main() {
    printf("Welcome to the Book Store\n");
    Book books[3] = {
        {.title = "The C Programming Language", .author = "Brian W. Kernighan and Dennis M. Ritchie", .price = 500.0},
        {.title = "The C++ Programming Language", .author = "Bjarne Stroustrup", .price = 600.0},
        {"The C# Programming Language", .author = "Anders Hejlsberg", .price = 700.0} // Not designated intializer for title
    };

    printf("\n\nHere are the details of all the books:\n");
    for(int i = 0; i < 3; i++) {
        print_book(&books[i]);
    }
    return 0;
    }
