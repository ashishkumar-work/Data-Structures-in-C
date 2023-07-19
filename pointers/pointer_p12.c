//Program to understand the Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n,i;
    printf("Enter the number of integers you want to insert:");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory not available\n");
        exit(1);
    }
    for(i=0; i<n; i++){
        printf("Enter your integer: ");
        scanf("%d", p+i);
    }
    printf("Your input integers are:\n");
    for(i=0; i<n; i++){
        printf("%d\n", *(p+i));
    }

}