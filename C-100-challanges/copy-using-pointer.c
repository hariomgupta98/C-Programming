#include <stdio.h>
 
void copy_arr(char *arr, int size, char *new_arr);
void print_arr(char *arr, int size);

int main() {
    char arr[12] = {'H', 'A', 'R', 'I', 'O', 'M', ' ', 'G', 'U', 'P', 'T', 'A'};
    char new_arr[12];

    printf("Welcome to coping array using pointer arithmetic.\n");
    printf("\nOringinal char array: ");
    print_arr(arr, 12);
    copy_arr(arr, 12, new_arr);
    printf("\nCopied char array: ");
    print_arr(new_arr, 12);

    return 0;
}

void copy_arr(char *arr, int size, char *new_arr) {
    for (int i = 0; i < size; i++) {
        *(new_arr + i) = *(arr + i);

        // *new_arr = *arr;
        // new_arr++;
        // arr++;
    }

}

void print_arr(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c", arr[i]);
    }
}