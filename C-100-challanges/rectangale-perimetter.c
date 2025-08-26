#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Please enter the length of the rectangle: ");
    scanf("%d", &a);
    printf("Now enter the width of the rectangle: ");
    scanf("%d", &b);
    printf("Now, enter the height of the rectangle: ");
    scanf("%d", &c);
    printf("Last, enter the depth of the rectangle: ");
    scanf("%d", &d);
    
    int perimetter = 2 * (a + b + c + d);
    printf("The perimetter of the rectangle is: %d", perimetter);
    return 0;
}