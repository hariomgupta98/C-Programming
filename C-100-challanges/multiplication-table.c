#include <stdio.h>

int main() {
    int number;
    printf("Welcome to printing tables\n");
    printf("Plese enter a number: ");
    scanf("%d", &number);

    int i = 1;
    while(i <=10){
        printf("%d * %d = %d\n", number, i, number*i);
        i++;
    }

return 0;
}


// for(int i = 1; i <= 10; i++)  in for loop.