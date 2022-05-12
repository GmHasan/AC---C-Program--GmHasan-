#include<stdio.h>
int main() {
    int a, b, num1, num2, r, gcd, lcm;
    printf("Enter the Value of a : ");
    scanf("%d", &a);
    printf("Enter the Value of b : ");
    scanf("%d", &b);
    num1 = a;
    num2 = b;
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("The GCD is = %d \n", gcd);
    printf("The LCM is = %d", lcm);
    return 0;
}