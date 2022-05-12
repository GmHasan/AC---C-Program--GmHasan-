#include<stdio.h>
int main() {
    int num;
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);

    num = ch;
    printf("Your Character is : %c\n", ch);
    printf("& ASCII Value of your Character is : %d", num);

    return 0;
}