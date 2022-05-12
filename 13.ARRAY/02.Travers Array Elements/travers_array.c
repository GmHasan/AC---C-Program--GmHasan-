//! Travers Array Elements

#include<stdio.h>
int main() {
    int arr[5];
    arr[0] = 10; //todo - [] ~~> Square Bracket Called Array Notation
    arr[1] = 15;
    arr[2] = 20;
    arr[3] = 25;
    arr[4] = 30;

    //todo - Array Notation er vitor Operation ghotiye array er valid index bole dite pari tahole amader Array theke sei index er value tai amra print krte pari 
    printf("%d\n", arr[2 * 2 / 2 + 1]);


    //todo - Amra chaile Operation ghotiye ekta valid array er range calculate kore ekta variable er vitoreo sei value te rakhte pari, print korte chaile variable calling er somoy array notation er vitor kebol oi variable ta rekhe dilei amra aamder sei operation er upor base kore output peye jabo
    int index = (3 * 2 - 2);
    printf("%d", arr[index]);

    return 0;
}