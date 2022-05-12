#include<stdio.h>
int main() {
    int a;
    
    a = (2 < 1) || (4 < 3); // False + False
    printf("(2 < 1) || (4 < 3) = %d\n", a); // 0
    
    a = (2 < 1) || (4 > 3); // False + True
    printf("(2 < 1) || (4 > 3) = %d\n", a); // 1
    
    a = (2 > 1) || (4 < 3); // True + False
    printf("(2 > 1) || (4 < 3) = %d\n", a); // 1
    
    a = (2 > 1) || (4 > 3); // True + True
    printf("(2 > 1) || (4 > 3) = %d", a); // 1

    return 0;
}