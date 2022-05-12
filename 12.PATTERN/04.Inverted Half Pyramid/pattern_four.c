#include<stdio.h>
int main() {
    int n = 5;
    //Outer Loop
    for(int i = n; i>=1; i--) {
        //Inner Loop
        for(int j = 1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}