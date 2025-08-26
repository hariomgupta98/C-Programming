#include <stdio.h>

int main() {
    float f;
    printf("Welcome to the Temperature converter\n");
    printf("Please enter the temperature in F: ");
    scanf("%f", &f);

    float c = (f - 32) * 5 / 9;
    printf("The temperature in C is: %.02f\n", c);
    return 0;
}