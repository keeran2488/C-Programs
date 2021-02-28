#include<stdio.h>

void main(){
    int r1,c1,r2,c2,i,j;
    int matrix1[10][10], matrix2[10][10];
    printf("\nEnter the size of 1st matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the size of 2nd matrix: ");
    scanf("%d%d",&r2,&c2);
    //check row and column of both matrix
    if(r1 == r2 && c1 == c2){
        printf("\nEnter the elements of %dX%d 1st matrix: \n",r1,c1);
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("\n\n");
        printf("\nEnter the elements of %dX%d 2nd matrix: \n",r2,c2);
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&matrix2[i][j]);
            }
        }
        printf("\n\nThe subtraction of matrix : \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                matrix1[i][j] = matrix1[i][j] - matrix2[i][j];
                printf("%5d", matrix1[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("\nThe order must be same.");
    }
}