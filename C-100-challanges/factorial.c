#include <stdio.h>

int main() {
    int num;
    printf("Welcome to the Factorial calculator\n");
    printf("Enter the nnumber: ");
    scanf("%d", &num);

    int i = 1;
    int factorial = 1;
    while(i <= num) {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d", num, factorial);
    return 0;
}