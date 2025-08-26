#include <stdio.h>

int main() {
    int num;
    printf("Welcome to the Sum of digit calculator\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum = 0;
    int copy = num;
    while (num > 0) {
        sum += num % 10; // add the last digit to sum
        num /= 10; // remove the last digit
}
printf("The sum of digit %d is %d",copy, sum);
return 0;
}