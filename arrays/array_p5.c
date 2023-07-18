//Passing an whole array into a function
//passing an array into fuction, which gives the function excess to do any changes into the array 
#include<stdio.h>
void func(int val[]);
int main(){
    int i, arr[10]={1,3,5,4,7,8,9,12,10,69};
    func(arr);
    printf("new array is:\n");
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }

}
void func(int val[]) //adding the sum of all squares of all elements in the array
{
    int sum=0, i;
    for(i=0; i<10; i++){
        val[i]=val[i]*val[i];
        sum +=val[i];
    }
    printf("sum of square of all the elements are:%d\n", sum);
}
