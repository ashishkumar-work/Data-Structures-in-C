//Program to find the largest and smallest number in an array
#include<stdio.h>
int main()
{
    int small, large;
    int arr[10]={2,5,3,46,33,2,0,-10,4,9};
    small = large = arr[0];
    for(int i=0; i<10; i++){
        if(arr[i]<small){
            small=arr[i];
        }
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("Smallest Number:%d, Lagrgest Number:%d", small, large);
}