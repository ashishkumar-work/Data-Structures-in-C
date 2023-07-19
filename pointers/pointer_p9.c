//Array passed in a function changes the original array, does not create local array
#include<stdio.h>
void func();
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("Orginal Array:\n");
    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    func(arr);
    printf("Control inside the main:\n");
    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
}
void func(int a[]){
    printf("Control inside the function:\n");
    for(int i=0; i<5; i++){
        a[i]=a[i]+2;
        printf("%d\n", a[i]);
    }
}