// considering first digit as the right most digit

#include<stdio.h>

void main(){
    int num, digit_1, digit_2, digit_3, digit_4;
    printf("Enter a 4 digited number: ");
    scanf("%d", &num);
    digit_1 = num % 10;
    num = num / 10;
    digit_2 = num % 10;
    num = num / 10;
    digit_3 = num % 10;
    num = num / 10;
    digit_4 = num % 10;
    printf("\n\nFirst digit = %d\nSecond digit = %d\nThird digit = %d\nFourth digit = %d\n",digit_1,digit_2,digit_3,digit_4);
}