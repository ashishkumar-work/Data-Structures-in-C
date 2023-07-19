//Program to print values and addresses 
#include<stdio.h>
#define size 5
int main()
{
    int i, arr[size]={1,2,3,4,5};
    for(i=0; i<5; i++){
        printf("Value of arr[%d] = %d\t", i, *(arr+i));
        printf("Address of arr[%d] = %p\n", i, arr+i);
    }

}