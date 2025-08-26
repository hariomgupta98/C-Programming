#include <stdio.h>

int main() {
    int number;
    printf("Please enter your number: ");
    scanf("%d", &number);

    if(number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number id zero.\n");
    }
    return 0;
    }