#include<stdio.h>
int main() {
    int n = 4;
    //Outer Loop
    for(int i = 1; i<=n; i++) {
        //Inner Loop ==> Space Print
        for(int j = 1; j<=n-i; j++) {
            printf(" ");
        }
        //Inner Loop ==> Star Print
        for(int j = 1; j<=i; j++) {
            printf("* "); //todo ==> (* + space)=> print Full Pyramid
        }
        printf("\n");
    }
    return 0;
}