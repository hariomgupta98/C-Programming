#include <stdio.h>

int main() {

    int first, second, third;
    printf("Welocme to the Greatest of three numbers program\n");
    printf("Please enter the first number: ");
    scanf("%d", &first);
    printf("Now, enter the second number: ");
    scanf("%d", &second);
    printf("Finally, enter the third number: ");
    scanf("%d", &third);

    if(first > second && first > third) {
        printf("%d id the greatest number.\n", first);
    } else if(second > third) {
        printf("%d is the greatest number.\n", second);
    } else {
         printf("%d is the greatest number.\n", third);
    }
    return 0;
}