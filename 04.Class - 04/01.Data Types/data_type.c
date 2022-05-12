#include<stdio.h>
int main() {
    int num1 = 45;
    float num2 = 450.45;
    char ch = 'S';

    printf("%d\n", num1);
    printf("%.2f\n", num2);
    printf("%c\n", ch);

    num1 = num2;
    printf("%d\n", num1);

    num1 = ch;
    printf("%d", ch);

    return 0;
}