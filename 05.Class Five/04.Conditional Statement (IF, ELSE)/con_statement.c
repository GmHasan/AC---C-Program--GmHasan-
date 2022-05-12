#include<stdio.h>
int main() {
    float a, b;
    printf("Enter the First Number : ");
    scanf("%f", &a);

    printf("Enter the Second Number : ");
    scanf("%f", &b);

    if(a > b) {
        printf("%.2f is Greater than %.2f", a, b);
    } else {
        printf("%.2f is Less than %.2f", a, b);
    }
    return 0;
}