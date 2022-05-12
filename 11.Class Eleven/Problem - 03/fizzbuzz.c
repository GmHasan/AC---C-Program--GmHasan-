/**
 * @file fizzbuzz.c
 * @author GmHasan
 * 
 * @brief ==> একটি সংখ্যা ইনপুট নেওয়া হবে, সংখ্যাটি 3 দ্বারা বিভাজ্য হলে "Fizz" প্রিন্ট করতে হবে, 5 দ্বারা বিভাজ্য হলে "Buzz" প্রিন্ট করতে হবে ! আর সংখ্যাটি 3 ও 5 উভয় সংখ্যা দ্বারা বিভাজ্য হলে প্রিন্ট করতে হবে "FizzBuzz" !!
 * 
 * @date 2022-02-27
 * @copyright Copyright (c) 2022
 * 
 **/

#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("FizzBuzz\n");
    } else if (num % 3 == 0) {
        printf("Fizz\n");
    } else if (num % 5 == 0) {
        printf("Buzz");
    } else {
        printf("0");
    }
    return 0;
}