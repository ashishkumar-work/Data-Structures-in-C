//Program for understand the relloc() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available\n");
        exit(1);
    }
    for(i=0; i<5; i++){
    printf("Enter your integer: ");
    scanf("%d", ptr+i);
    }
    ptr = (int *)realloc(ptr, 9*sizeof(int));  //Allocating memory for 4 more integers
    if(ptr==NULL){
        printf("Memory not available");
        exit(1);
    }
    for(i=5; i<9; i++){
        printf("Enter your integer number-%d:", i+1);
        scanf("%d", ptr+i);
    }
    printf("your input is:\n");
    for(i=0; i<9; i++){
        printf("%d\n", *(ptr+i));
    }
    
}