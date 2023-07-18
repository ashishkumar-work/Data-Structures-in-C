//Rervesing elements of an array
#include<stdio.h>
int main()
{
    int i, j, exchange, arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0, j=9; i<j; i++, j--){
        exchange=arr[i];
        arr[i]=arr[j];
        arr[j]=exchange;
    }
    for(i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
}