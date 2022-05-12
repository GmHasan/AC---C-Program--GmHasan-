#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("The Number is EVEN");
    } else {
        printf("The Number is ODD");
    }
    return 0;
}