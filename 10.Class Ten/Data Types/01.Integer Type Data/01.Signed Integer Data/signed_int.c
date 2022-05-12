#include<stdio.h>
int main() {

    //short - %d, %hi
    short a = 45;
    printf("I am short - %hi\n", a);

    //integer - %d, %i
    int b = 1000;
    printf("I am integer - %d\n", b);

    //long -%ld, %li
    long c = 1200l;
    printf("I am long - %ld\n", c);

    //long long - %lld, %lli
    long long d = 1475700ll;
    printf("I am long long - %lld\n", d);

    //octal int - %o
    int o = 0555;
    printf("I am octal int - %o\n", o);
    printf("I am decimal of octal int - %d\n", o);

    //hexadecimal int - %x, %X
    int h = 0Xfff;
    printf("I am hexadecimal int - %x\n", h);
    printf("I am decimal of hexadecimal - %d\n", h);

    return 0;
}