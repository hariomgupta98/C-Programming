#include <stdio.h>

int main() {
    int side;
    printf("Enter the side of the square in cm: ");
    scanf("%d", &side);
    printf("The area of the square is %d cm*cm", side * side);
}