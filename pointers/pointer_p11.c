//Array of pointers
#include<stdio.h>
int main()
{
    int *pa[3];
    int i, a=1,b=2,c=3;
    pa[0]=&a;
    pa[1]=&b;
    pa[2]=&c;
    for(i=0; i<3; i++){
        printf("pa[%d] = %p\t",i, pa[i]);
        printf("*pa[%d] = %d\n", i, *pa[i]);
    }
}