#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    printf("Welcome to Adding numbers\n");
    do {
        printf("Please enter the number: ");
        scanf("%d", &num);
        if (num < 0) continue; 
        sum += num;
    } while (num != 0);
    printf("The sum of all positive number is %d", sum);
    return 0;
}