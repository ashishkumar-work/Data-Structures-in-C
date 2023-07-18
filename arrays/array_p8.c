//Program for multiplication of two matrices
#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
int main()
{
    
    int i, j, k, mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
    for(i=0; i<ROW1; i++){                             //First matrix loop
        for(j=0; j<COL1; j++){
            printf("Enter your element in matrix-1(%dx%d):", i,j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for(i=0; i<ROW2; i++){                           //Second matrix loop
        for(j=0; j<COL2; j++){
            printf("Enter your element in matrix-2(%dx%d):", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0; i<ROW1; i++){                        //Multiplication
        for(j=0; j<COL2; j++){
            mat3[i][j]=0;
            for(k=0; k<COL1; k++){
                mat3[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("The resultant matrix is:\n");
    for(i=0; i<ROW1; i++){
        for(j=0; j<COL2; j++){
            printf("%5d ", mat3[i][j]);
        }
        printf("\n");
    }
}
