#include <stdio.h>
#include <math.h>

int main() {
     float principal, rate, time;
     printf("Welcome to Compound Interest calculator\n");
     printf("Please enter the principal amount: ");
     scanf("%f", &principal);
     printf("Now, enter the rate of interest: ");
     scanf("%f", &rate);
     printf("Last, enter the time in years: ");
     scanf("%f", &time);

    float interest = principal * pow((1 + rate / 100), time);
    printf("The compound interest is: %.2f", interest);
    return 0;
}