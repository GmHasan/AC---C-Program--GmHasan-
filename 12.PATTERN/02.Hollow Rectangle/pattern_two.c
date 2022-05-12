#include<stdio.h>
int main() {
    int m = 4;
    int n = 12;
    //Outer Loop
    for (int i = 1; i<=m; i++) {
        //Inner Loop
        for (int j = 1; j<=n; j++) {
            if (i==1 || j==1 || i==m || j==n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}