// considering first digit as the right most digit

#include<stdio.h>

void main(){
    int num, digit_1, digit_2, digit_3, digit_4, rev, copy;
    printf("Enter a 4 digited number: ");
    scanf("%d", &num);
    copy = num;             //making copy of original number
    digit_1 = num % 10;
    num = num / 10;
    digit_2 = num % 10;
    num = num / 10;
    digit_3 = num % 10;
    num = num / 10;
    digit_4 = num % 10;
    rev = digit_1 * 1000 + digit_2 * 100 + digit_3 * 10 + digit_4;
    printf("\nOriginal number = %d", copy);
    printf("\nReverse number = %d", rev);
}