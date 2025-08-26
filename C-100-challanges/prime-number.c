#include <stdio.h>

int main() {
    int num;
    printf("Welcome to the Prime number checker\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if(num % i == 0) {
            printf("%d is not prime no.",num);
            return 0;
        }
    }
    printf("%d is prime no.", num);
    return 0;
}


//     int i = 2;
//     while (i < num) {
//         if (num % i == 0) {
//             printf("%d is not prime no.",num);
//             return 0;
//         }
//         i++;
//     }

//     printf("%d is prime no.",num);
//     return 0;
// }
