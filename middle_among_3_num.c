#include<stdio.h>

void main(){
    int number_1, number_2, number_3;
    printf("\nEnter three numbers: ");
    scanf("%d%d%d",&number_1, &number_2, &number_3);
    if((number_1 > number_2 && number_1 < number_3) || (number_1 < number_2 && number_1 > number_3)){
        printf("\nThe middle number = %d", number_1);
    }else if((number_2 > number_3 && number_2 < number_1) || (number_2 < number_3 && number_2 > number_1)){
        printf("\nThe middle number = %d", number_2);
    }else{
        printf("\nThe middle number = %d", number_3);
    }
}