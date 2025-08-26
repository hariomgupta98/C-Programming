#include <stdio.h>

int main() {
    int num;
    printf("Welocme to the sum of odd numbers\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    int i = 1;
    int sum = 0;
    while(i <= num) {
        sum += i;
        i += 2;
    }
    printf("The sum of all number from 1 to %d is: %d", num, sum);
    return 0;

}