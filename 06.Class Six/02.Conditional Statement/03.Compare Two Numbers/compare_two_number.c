#include<stdio.h>
int main() {
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);

    printf("Enter Second Number : ");
    scanf("%d", &b);

    if(a == b) {
        printf("The Numbers Are Equal");
    } else if (a > b) {
        printf("%d is Greater Than %d", a, b);
    } else {
        printf("%d is Less Than %d", a, b);
    }
    return 0;
}