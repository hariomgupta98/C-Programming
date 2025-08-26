#include <stdio.h>

int main() {
    int rows;
    printf("Welcome to Patterns\n");
    printf("Please enter the number of rows: ");
    scanf("%d", &rows);


    printf("Here is the right half pyramid");
    for (int i = 1; i <= rows; i++) {
        printf("\n");
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
    }


        printf("\n\nHere is the Reverse right half pyramid");
        for (int i = 0; i < rows; i++) {
            printf("\n");
            for (int j = 0; j < rows - i; j++) {
                printf("* ");
            }
        }



        printf("\n\nHere is the Left half pyramid");
        for (int i = 1; i <= rows; i++) {
            printf("\n");

            for (int k = 0; k < rows - i; k++) {
                printf("  ");
            }
            for (int j = 0; j < i; j++) {
                printf("* ");
            }
        }
    return 0;
}