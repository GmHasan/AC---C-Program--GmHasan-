#include<stdio.h>
int main() {
    int seen[10] = {0};
    int rem, N;
    printf("Enter Your Number : ");
    scanf("%d", &N);

    while(N > 0) {
        rem = N % 10;
        if(seen[rem] == 1) {
            break;
        }
        seen[rem] = 1;
        N = N / 10;
    }
    if(N > 0) {
        printf("YES, Repeated Digits Found");
    } else {
        printf("NO, Repeated Digits Not Found");
    }
    return 0;
}