#include <stdio.h>

int main() {
    int num;
    printf("Welcome to the Reverse the number\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;
    while  (copy > 0) {
        reverse = reverse * 10 + (copy % 10);
        copy /= 10;
    }
    printf("The reverse of %d is %d\n", num, reverse);
    return 0;
}