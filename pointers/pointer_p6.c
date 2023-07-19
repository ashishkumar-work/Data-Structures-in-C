//Program for call by reference
#include<stdio.h>
void ref(int *p, int *q);
int main()
{
    int a = 420, b = 69;
    printf("Before calling the function, a = %d and b = %d\n", a, b);
    ref(&a, &b);
    printf("After calling the function, a = %d and b = %d\n", a, b); 
}
void ref(int *p, int *q)
{
    (*p)++;
    (*q)++;
    printf("value inside the function, *p = %d and *q = %d\n", *p, *q);
}