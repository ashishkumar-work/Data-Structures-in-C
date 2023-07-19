//Program to dereference pointer variables
#include<stdio.h>
int main()
{
    int a = 420;
    float b = 69;
    int *p1 = &a;
    float *p2 = &b;
    printf("Value of p1 = Address of a = %p\n", p1);
    printf("Value pointer p2 = Adress of b = %p\n", p2);
    printf("Adress of p1 = %p\n", &p1);
    printf("Adress of p2 = %p\n", &p2);
    printf("Value of a = %d, %d, %d\n",a, *p1, *(&a));
    printf("Value of b = %f, %f, %f", b, *p2, *(&b));
}
