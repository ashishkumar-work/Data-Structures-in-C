//Program for addition of two matrices
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int i, j, mat1[ROW][COL], mat2[ROW][COL], mat3[ROW][COL];
    for(i=0; i<ROW; i++){                             //First matrix loop
        for(j=0; j<COL; j++){
            printf("Enter your element in matrix-1(%dx%d):", i,j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for(i=0; i<ROW; i++){                           //Second matrix loop
        for(j=0; j<COL; j++){
            printf("Enter your element in matrix-2(%dx%d):", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0; i<ROW; i++){                         //Addition of matrices
        for(j=0; j<COL; j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("The sum of two matrices is:\n");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("%5d ", mat3[i][j]);
        }
        printf("\n");
    }
}