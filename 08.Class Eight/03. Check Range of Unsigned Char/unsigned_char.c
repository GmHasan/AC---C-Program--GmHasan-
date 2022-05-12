#include<stdio.h>
int main() {
    
    //! unsigned char type variable er vitor amra kebol matro 0 theke suru kore 255 porjonto number store korte parbo, orthat 0 to 255 = 256ta value store krte parbo !!

    unsigned char a = 255;
    printf("%d\n", a);

    //! jodi unsigned char declare korar por variable tar limit cross kore tahole terminal e warning show krbe [-Woverflow] & 256 print krte chaile 0, 257 print krte chaile 1 & simultaniously cholte thakbe
    unsigned char b = 256;
    printf("%d", b);

    return 0;
}