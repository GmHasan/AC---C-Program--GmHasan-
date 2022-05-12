#include<stdio.h>
int main() {
    int a, b, c, sum, avg;
    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("Enter Third Number : ");
    scanf("%d", &c);

    sum = a + b + c;
    printf("The SUM : %d\n", sum);

    avg = sum / 3;
    printf("The Average : %d", avg);

    return 0;
}