#include<stdio.h>
int main() {
    float b, h, area;
    printf("Enter The Base : ");
    scanf("%f", &b);

    printf("Enter The Height : ");
    scanf("%f", &h);

    area = (b * h) / 2;
    printf("The Area of a Triangle is : %.2f", area); 

    return 0;
}