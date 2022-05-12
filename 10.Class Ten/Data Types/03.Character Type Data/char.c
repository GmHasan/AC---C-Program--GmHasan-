#include<stdio.h>
int main() {
    //Char - %c
    char a = 'A';

    printf("%c\n", a);
    printf("%d\n", a); // Ans. 65 !! ASCII Value of 'A'

    // Again,
    char num = 65;

    printf("%d\n", a); //char variable er vitor number assign krle oi number tai print krte chaile "%d" format specifier use krte hbe 

    printf("%c", num); // char variable er vitor number assign krle oi number er ASCII Table er Character print krte chaile "%c" format specifier use krte hbe 

    return 0;
}