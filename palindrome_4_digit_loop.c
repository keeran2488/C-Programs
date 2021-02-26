#include<stdio.h>

void main(){
    int num, digit_1, digit_2, digit_3, digit_4, rev, copy;
    printf("\nEnter 4 digited number: ");
    scanf("%d", &num);
    copy = num;             // making copy of original digit
    digit_1 = num % 10;
    num = num / 10;
    digit_2 = num % 10;
    num = num / 10;
    digit_3 = num % 10;
    num = num / 10;
    digit_4 = num % 10;
    rev = digit_1*1000 + digit_2*100 + digit_3*10 + digit_4;
    if(copy == rev){
        printf("%d is a palindrome number.", copy);
    }else{
        printf("%d is not a palindrome number.", copy);
    }
}