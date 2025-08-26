#include <stdio.h>

int main() {
    int num;
    printf("Welocme to Fibonacci Series\n");
    printf("Please enter the number upto which series should be printed: ");
    scanf("%d", &num);

    printf(" 0");
    if(num > 0) {
        printf(" 1"); 
    }
    int prev = 0, curr = 1;
    while (prev + curr <= num) {
        int temp = prev + curr;
        printf(" %d", temp);
        prev = curr;
        curr = temp;
    }
    return 0;

}