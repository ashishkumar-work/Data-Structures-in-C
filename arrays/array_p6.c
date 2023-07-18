//Program to input and display a two dimentional array(A Matrix)
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int mat[ROW][COL], i, j;
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("Enter the elements for the matrix(%dx%d):", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("the matrix  that you have entered is: \n");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("%5d", mat[i][j]);                     
            }
        printf("\n");
    }

}