#include <stdio.h>
 int main() {
    int first, second;
    printf("Please enter the first number: ");
    scanf("%d", &first);
    printf("Now, enter the second number: ");
    scanf("%d", &second);

    printf("Here are the result of the operations\n");
    printf("Addition: %d + %d = %d\n", first, second,(first + second));
    printf("Subtraction: %d - %d = %d\n", first, second, (first - second));
    printf("Multiplication: %d * %d = %d\n", first, second, (first * second));
    printf("Division: %d / %d= %d\n", first, second, (first / second));
    printf("Modulus: %d modulo %d = %d\n", first, second, (first % second));
    return 0;
 }