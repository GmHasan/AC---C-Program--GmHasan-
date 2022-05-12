#include<stdio.h>
int main() {
    int arr[5][5] =
    {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
    };
    int sum = 0;

    //* Row Sum *//
    printf("Row Total : ");
    for(int i = 0; i<5; i++) {
        for(int j = 0; j<5; j++) {
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    //* Column Sum *//
    printf("\nColumn Total : ");
    for(int j = 0; j<5; j++) {
        for(int i = 0; i<5; i++) {
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    return 0;
}