#include<stdio.h>
int main() {

        int a, x;
    a = 5;

    // "a" variable er value aage "x" variable er vitor assign hobe then "a" variable er value er sathe 1 jog hobe
    x = a++;

    printf("The Post-Increment Value is = %d\n", x);  // 5
    printf("The Value of a is =  %d", a);             // 6

    return 0;
}