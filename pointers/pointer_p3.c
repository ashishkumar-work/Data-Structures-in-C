//Program to print values and addresses of elements in an array
#include<stdio.h>
#define size 5
int main()
{
    int arr[size]={10,20,30,40,50}; // Array any value can be put in it for testing
    for(int i=0; i<size; i++){
        printf("values of arr[%d] = %d\t",i, arr[i]);
        printf("Address of arr[%d] = %p\n", i, &arr[i]);
    }

}