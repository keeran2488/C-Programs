//fibonicca series upto 10th term

#include<stdio.h>

void main(){
    int first = 0, second = 1, third, i;
    printf("%5d %5d", first, second);
    for(i=0; i<=8;i++){
        third = first + second;
        printf("%5d", third);
        first = second;
        second = third;
    }
}