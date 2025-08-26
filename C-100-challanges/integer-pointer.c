#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;
    printf("Welcome  to showing integer pointers.s\n");
    printf("Please enter the value: ");
    scanf("%d",ptr);

    printf("The value of num is: %d", *ptr);
    printf("\nThe value of num is: %d", num);
    return 0;
}