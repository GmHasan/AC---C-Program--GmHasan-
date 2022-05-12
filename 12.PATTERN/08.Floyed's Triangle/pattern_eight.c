#include<stdio.h>
int main() {
    int n = 4;
    int num = 1;

    //Outer Loop
    for(int i = 1; i<=n; i++) {
        //Inner Loop
        for(int j = 1; j<=i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}