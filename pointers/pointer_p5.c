//Program to call by value
#include<stdio.h>
void value(int x, int y);
int main()
{
    int a=419, b=68;
    printf("Before calling the function, a = %d and b = %d\n", a, b);
    value(a, b);
    printf("After calling the function, a = %d and b = %d\n", a, b);
}
void value(int x, int y){
    x++;
    y++;
    printf("values inside the function x = %d and y = %d\n",x, y);
}