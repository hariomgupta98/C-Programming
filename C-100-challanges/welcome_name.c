// #include <stdio.h>
// 
// int main() {
    // char name[20];
    // printf("Please enter your name: ");
    // scanf(" %19s" , name);
    // printf("Welcome %s to The world of C programming.", name);
// }

#include <stdio.h>

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    printf("Hello, World!\n");
    printf("%s", input);

    return 0;
}