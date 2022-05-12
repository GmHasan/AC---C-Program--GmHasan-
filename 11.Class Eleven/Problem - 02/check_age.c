/**
 * @file check_age.c
 * @author GmHasan
 * 
 * @brief ==> কোন একটি চাকরির আবেদনকারীদের বয়সসীমা নির্ধারণ করা হলো 18 থেকে  35 বছর ! এখন একটি প্রোগ্রাম লিখতে হবে, যেটা আবেদনকারীর বয়স ইনপুট নিবে এবং বয়সের হিসেবে সে যোগ্য কিনা সেটি প্রিন্ট করবে !!
 * 
 * @date 2022-02-27
 * @copyright Copyright (c) 2022
 * 
 **/

#include<stdio.h>
int main() {
    int age;
    printf("Enter Your Age : ");
    scanf("%d", &age);

    if (age > 18 && age < 36)
    {
        printf("Yes, You are Eligible");
    } else {
        printf("No, You are not Eligible");
    }

    return 0;
}