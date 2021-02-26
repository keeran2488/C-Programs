// considering first digit as the right most digit

#include<stdio.h>

void main(){
    int num, digit, copy;
    int rev = 0;
    int multiplier = 1000;
    printf("Enter a 4 digited number: ");
    scanf("%d", &num);
    copy = num;             //making copy of original number
    while(num > 0){
        digit = num % 10;
        num = num / 10;
        rev = rev + digit * multiplier;
        multiplier = multiplier / 10;
    }
    printf("\nOriginal number = %d", copy);
    printf("\nReverse number = %d", rev);
}