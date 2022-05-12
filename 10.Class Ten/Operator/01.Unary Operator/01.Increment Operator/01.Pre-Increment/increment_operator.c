#include<stdio.h>
int main() {
    int a, x;

    a = 5;

    // "a" variable er value er sathe aage 1 jog hobe, the "x" variable e assign hobe
    x = ++a;

    printf("The Pre-Increment Value is = %d\n", x); // 6

    printf("The Value of a is = %d", a); // 6


    return 0;
}