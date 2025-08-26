#include <stdio.h>

int main() {
    const float PI = 3.14159;
    int radius;
    printf("Enter the radius of the circle in cm: ");
    scanf("%d", &radius);
    printf("The area of the circle is %f cm^2", PI*radius*radius);
    return 0;
}