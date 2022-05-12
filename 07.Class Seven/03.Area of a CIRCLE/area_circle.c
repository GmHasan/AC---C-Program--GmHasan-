#include<stdio.h>
int main() {
    const float PI = 3.1416;
    float r, area;

    printf("Enter The Value of Radius : ");
    scanf("%f", &r);

    area = PI * r * r;
    printf("The Area of the Circle is : %.2f", area);

    return 0;
}