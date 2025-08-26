#include <stdio.h>

int main() {
    int first, second;
    printf("Welocme to LCM calculator\n");
    printf("Please enter the first number: ");
    scanf("%d", &first);
    printf("Now,enter the second number: ");
    scanf("%d", &second);

    int min = first > second ? first : second;
    int max = first * second;

    for(int i = min; i <= max; i++) {
        if(i % first == 0 && i % second == 0) {
            printf("The LCM of %d and %d is %d\n", first, second,i);
            break;
        }
    }
    return 0;
}