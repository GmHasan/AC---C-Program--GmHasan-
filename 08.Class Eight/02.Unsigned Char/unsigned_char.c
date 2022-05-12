#include<stdio.h>
int main() {
    // Jodi Amader, RAM e shobchaite kom space newar dorkar hoy tahole amra char / unsigned char data type declare krte pari bcz char / unsigned char memory te kebolmatro 1Byte(8bit) jayga ney

    unsigned char a = 255;
    printf("%d\n", a);

    // sizeof() Function use korar maddhome kno ekti "data type" memory te koto jayga ney seti jante pari, & tar result amra pabo Byte e !! & formate specire hobe "%lu"
    printf("%lu", sizeof(unsigned char));

    return 0;
}