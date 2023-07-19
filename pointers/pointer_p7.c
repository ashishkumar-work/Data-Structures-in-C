//Program to return more than one value from a function
//From call by reference method
#include<stdio.h>
void func();
int main()
{
    int a=420, b=69, sum, diff, prod;
    func(a, b, &sum, &diff, &prod);
    printf("The sum is %d\nThe difference is %d\nThe Product is %d\n", sum, diff, prod);
}
void func(int x, int y, int *sm, int *df, int *pd){
    *sm = x+y;
    *df = x-y;
    *pd = x*y;
}