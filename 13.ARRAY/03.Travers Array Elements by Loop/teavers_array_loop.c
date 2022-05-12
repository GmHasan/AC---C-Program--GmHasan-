//! Travers Array Elements by Loop

#include<stdio.h>
int main() {
    int arr[5];
    arr[0] = 10;
    arr[1] = 15;
    arr[2] = 20;
    arr[3] = 25;
    arr[4] = 30;

    /**
     * @brief ~~> i jkhn 0 tkhn 0 no. index er value print hobe
     * @brief ~~> i jkhn 1 tkhn 1 no. index er value print hobe
     * @brief ~~> i jkhn 2 tkhn 1 no. index er value print hobe
     **/

    for(int i = 0; i<=4; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}