#include<stdio.h>

struct Book {
    char tittle[100];
    char author[100];
    float price;
};

typedef struct Book Book;

typedef struct {
    char id[10];
    char name[50];
    char year[10];
    char grade;
    int borrowed_books[3];
    Book borrowed_books[3];
} Student;

void print_student(Student*);

int main() {
    Student stu1 = 

}

}