#include <stdio.h>

int main() {
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 )) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is a not leap year.\n", year);
    }
    return 0;
}