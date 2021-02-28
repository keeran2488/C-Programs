#include<stdio.h>

void main(){
    int r,c,num[10][10],i,j;
    printf("\nEnter the size of the matrix: ");
    scanf("%d%d",&r,&c);
    printf("\nEnter the elements of %dX%d matrix: \n",r,c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&num[i][j]);
        }
    }
    printf("\n\nThe transpose of the give matrix :\n\n");
    for(i=0;i<c;i++){
        printf("\n");
        for(j=0;j<r;j++){
            printf("%5d",num[j][i]);
        }
    }
}