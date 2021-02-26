// considering first digit as the right most digit

#include<stdio.h>

void main(){
    int num, digit;
    int i = 0;
    printf("Enter a 4 digited number: ");
    scanf("%d", &num);
    while(num > 0){
        i++;
        digit = num % 10;
        num = num / 10;
        printf("\nDigit %d = %d", i, digit);
    }
}