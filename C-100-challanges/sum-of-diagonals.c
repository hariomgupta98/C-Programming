#include <stdio.h>

const int SIZE = 4;
void print_diagonal_sum(int arr[][SIZE]);

int main() {
    printf("Welcome to Sum of diagonals in 2D arrays.\n");
    int arr1[3][3] = {{1,6,8}, {9,5,6}, {1,9,3}};
    int arr2[4][4] = {{8,7,6,5}, {4,8,6,5}, {7,5,6,5}, {8,0,4,8}};

    print_diagonal_sum(arr2);

}

void print_diagonal_sum(int arr[][SIZE]) {
    int sum_left_diagonal = 0;
    int sum_right_diagonal = 0;
    for (int i = 0; i < SIZE; i++) {
        sum_left_diagonal += arr[i][i];
        sum_right_diagonal += arr[i][SIZE - 1 - i];
    }

    printf("\n The sum of left diagonal is %d", sum_left_diagonal);
    printf("\n The sum of right diagonal is %d", sum_right_diagonal);

    int total_diagonal_sum = sum_left_diagonal + sum_right_diagonal;
    if(SIZE % 2 == 1) {
        int index = SIZE / 2;
        total_diagonal_sum -= arr[index][index];
    }
    printf("\n The sum of total diagonal is %d", total_diagonal_sum);
}