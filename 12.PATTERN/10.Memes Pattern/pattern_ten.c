#include<stdio.h>
int main() {
    int n = 4;
    //Outer Loop
    for(int i = 1; i<=n; i++) {
        int num = (i * i * i + 11 * i - 6) / 6;
        //Inner Loop
        for(int j = 1; j<=i; j++) {
            printf("%d ", num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}