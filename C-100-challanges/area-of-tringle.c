#include <stdio.h>

int main() {
    int a, b;
    printf("welocme to Area of Triangle calculator\n");
    printf("Please enter the height of the triangle: ");
    scanf("%d", &a);
    printf("Now, enter the bredth of the triangle: ");
    scanf("%d", &b);
    
    int area = (a * b)/2;
    printf("The area of the triangle is: %d", area);
    return 0;
}