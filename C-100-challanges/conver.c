#include <stdio.h>

int main() {
    int number;
    printf(" Please enter a number: ");
    scanf("%d", &number);

    float floating = number;
    printf("\nOriginal number is: %d", number);
    printf("\nfloat converted is: %f", floating);
    printf("\nfloat converted is: %f",(float) number);
    return 0;
}
