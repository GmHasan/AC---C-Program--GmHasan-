#include<stdio.h>
int main() {
    float a = 10;
    float b = 20;
    float c;

    //Addition
    c = a + b;
    printf("%.2f + %.2f = %.2f\n", a, b, c);

    //Substraction
    c = a - b;
    printf("%.2f + %.2f = %.2f\n", a, b, c);

    //Multiplication
    c = a * b;
    printf("%.2f + %.2f = %.2f\n", a, b, c);

    //Division
    c = a / b;
    printf("%.2f + %.2f = %.2f", a, b, c);

    return 0;
}
