#include<stdio.h>
int main() {
    int a;
    printf("Enter a Number from 1 to 5 : ");
    scanf("%d", &a);
    
    switch (a) {
    case 1 :
    printf("One");
        break;
    case 2 :
    printf("Two");
        break;
    case 3 :
    printf("Three");
        break;
    case 4 :
    printf("Four");
        break;
    case 5 :
    printf("Five");
        break;
    
    default:
    printf("You didn't enter a number from 1 to 5");
    }
    return 0;
}