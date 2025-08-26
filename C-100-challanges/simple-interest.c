#include <stdio.h>

int main() {
    float principal, rate, time;
    printf("Welcome to Simple Interst calculator\n");
    printf("Please enter the principal amount: ");
    scanf("%f", &principal);
    printf("Now, enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Last, enter the time in year: ");
    scanf("%f", &time);

    float interest = (principal * rate * time)/100;
    printf("The simple interest is: %.2f", interest);
    return 0;
}