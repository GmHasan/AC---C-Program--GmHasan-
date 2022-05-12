#include<stdio.h>
int main() {

  //! BASIC Way to store a STRING
  char name[20];
    name[0] = 'G';
    name[1] = 'm';
    name[2] = ' ';
    name[3] = 'H';
    name[4] = 'a';
    name[5] = 's';
    name[6] = 'a';
    name[7] = 'n';

    printf("%s\n", name);
    printf("%c\n", name[0]);


    //! Normal way to Store a String
    char name1[20] = {'G', 'M', ' ', 'H', 'a', 's', 'a', 'n'};
    printf("%s\n", name1);
    printf("%c\n", name1[1]);
    

    //! Advanced Way to Store a String
    char name2[20] = "Gm Hasan";
    printf("%s\n", name2);
    printf("%c\n", name1[3]);

    return 0;
}