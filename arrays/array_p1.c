//program to input and display values in an array
#include<stdio.h>
int main()
{
    int arr[5], i;
    for(i=0; i<5; i++){
        printf("Enter the value into arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array are:\n");
    for(i=0; i<5; i++){
        printf("%d\t",arr[i]);
    }
}