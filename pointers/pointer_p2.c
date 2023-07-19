//Program to understand pointer to a pointer
#include<stdio.h>
int main()
{
    int a = 69;
    int *pa;
    int **ppa;
    pa = &a;
    ppa = &pa;
    printf("Adress of a = %p\n", pa);
    printf("Value of a = %d\n", *pa);
    printf("Value of *pa = value of a = %d\n", *pa);
    printf("Address of pa = %p\n", &pa);
    printf("value of ppa = address of pa = %p\n", ppa);
    printf("value of *ppa = value of pa = %p\n", *ppa);
    printf("Value of **ppa = value of a = %d\n", **ppa);
    printf("Address of ppa = %p", &ppa);
}
