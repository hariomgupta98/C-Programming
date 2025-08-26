#include <stdio.h>

int main() {
    int max;
    printf("Welcome to printting even numbers\n");
    printf("Please enter the number: ");
    scanf("%d", &max);

    for (int i = 0; i <= max; i++) {
        if (i % 2 == 1) continue;
        printf("%d ", i);
    }
    return 0;
}