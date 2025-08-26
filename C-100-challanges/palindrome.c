#include <stdio.h>

int main() {
    int num;
    printf("Welcome to Palindrome chaecker\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;
    while (copy > 0) {
        reverse = reverse * 10 + (copy % 10);
        copy /= 10;
    }
    if (reverse == num) {
        printf("The number %d is a Palindrome.", num);
    } else {
        printf("The number %d id not a Palindrome.", num);
    }
    return 0;
}