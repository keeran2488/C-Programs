// considering first digit as the right most digit

#include<stdio.h>

void main(){
    long int num;
    int first_digit, last_digit;
    int sum;
    printf("Enter a 5 digited number: ");
    scanf("%ld", &num);
    first_digit = num % 10;         // getting first digit of inputted number
    last_digit = num / 10000;      // getting last digit of inputted number
    sum = first_digit + last_digit;
    printf("\nThe sum of first and last digit of %ld = %d", num, sum);

}