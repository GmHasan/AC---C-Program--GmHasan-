#include<stdio.h>
int main() {
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    if(a > b) {
        printf("%d is GREATER than %d", a, b);
    } else {
        printf("%d is LESS than %d", a, b);
    }
    return 0;
}