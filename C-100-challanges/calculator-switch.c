#include <stdio.h>

int main() {
    float first, second;
    char operator;
    printf("Welcome to the Calculator!\n");
    printf("Please Enter the first number: ");
    scanf("%f", &first);
    printf("Now, enter the second number: ");
    scanf("%f", &second);
    printf("Finally, enter the operator (+,-,*,/): ");
    scanf(" %c", &operator);

    float res;
    int invalid = 0;
    switch(operator) {
        case '+': res = first + second;
        break;
        case '-': res = first - second;
        break;
        case '*': res = first * second;
        break;
        case '/': res = first / second;
        break;
        default:
        invalid = 1;
            break;
    }
    if(invalid == 0) {
        printf("The result is: %.2f", res);
    }else {
        printf("Invalid operator! Please use (+,-,*,/)");
    }
    return 0;
}