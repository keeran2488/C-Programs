#include<stdio.h>

void main(){
    int num, digit, copy;
    int rev = 0;
    printf("\nEnter 4 digited number: ");
    scanf("%d", &num);
    copy = num;             // making copy of original number
    while(num > 0){
        digit = num % 10;
        num = num / 10;
        rev = rev * 10 + digit;     // reversing the number
    }
    if(copy == rev){
        printf("%d is a palindrome number.", copy);
    }else{
        printf("%d is not a palindrome number.", copy);
    }
}