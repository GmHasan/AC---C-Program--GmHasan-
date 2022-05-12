#include<stdio.h>
int main() {
    float C, F;
    
    printf("Enter Celsius Value : ");
    scanf("%f", &C);

    F = (C * 9/5) + 32;
    printf("The Fahrenheit Value is : %.2f", F);

    return 0;
}