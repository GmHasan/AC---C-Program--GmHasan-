#include<stdio.h>
int main() {
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    if(a == b) {
        printf("The Numbers Are EQUAL");
    } else {
        printf("The Numbers Are Not Equal");
    }
    return 0;
}