#include<stdio.h>

void main(){
    int number_1, number_2, number_3;
    printf("\nEnter three numbers: ");
    scanf("%d%d%d",&number_1, &number_2, &number_3);
    if(number_1 > number_2){
        if(number_1 > number_3){
            printf("\nThe greatest number = %d", number_1);
        }else{
            printf("\nThe greatest number = %d", number_3);
        }
    }else{
        if(number_2 > number_3){
            printf("\nThe greatest number = %d", number_2);
        }else{
            printf("\nThe greatest number = %d", number_3);
        }
    }
}