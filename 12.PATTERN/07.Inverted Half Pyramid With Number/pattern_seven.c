#include<stdio.h>
int main() {
    int n = 5;
    //Outer Loop
    for(int i = 1; i<=n; i++) {
        //Inner Loop
        for(int j = 1; j<=n-i+1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}