#include <stdio.h>

int main() {
    int interger;
    float decimal;
    double doub;
    char character;

    printf("\nThe size of int is %lu bytes", sizeof(interger));
    printf("\nThe size of float is %lu bytes", sizeof(float));
    printf("\nThe size of double is %lu bytes", sizeof(doub));
    printf("\nThe size of char is %lu bytes", sizeof(character));
}