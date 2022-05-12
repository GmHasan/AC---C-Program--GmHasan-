#include<stdio.h>
int main() {
    int a = 4;
    int b = 10;
    //Outer Loop
    for (int i = 1; i<=a; i++){
        for (int j = 1; j<=b; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}