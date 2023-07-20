//Program to show a function that returns pointer
#include<stdio.h>
int *fun();
int main()
{
    int *ptr, n=5, arr[10]={1,2,3,4,5,6,7,8,9,10};
    ptr = fun(arr, n);
    printf("arr = %p, ptr = %p, *ptr = %d\n", arr, ptr, *ptr);
}
int *fun(int *p, int n){
    p = p+n;
    return p;
}
