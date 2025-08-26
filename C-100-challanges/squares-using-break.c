#include <stdio.h>

int main() {
    int num;
    printf("Welcome to the world of Squares\n");
    while (1) {
        printf("\nPlease enter the number: ");
        scanf("%d", &num);
        if (num == -1) break;
        printf("The square of %d is %d" , num, num*num);
    }
    printf("Thank you for using the program. Goodbye!");
    return 0;
}