#include <stdio.h>

int main() {
    int age;
    printf("Welcome to Age group calculator.\n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are are a child.\n");
    } else if (age < 20) {
        printf("You are a teen.\n");
    } else if (age < 60) {
        printf("You are an adult.\n");
    } else {
        printf("You are a senior ");
    }
    return 0;
}