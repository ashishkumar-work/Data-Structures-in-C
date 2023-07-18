//Passing an array to a function
#include<stdio.h>
void check(int num);
void main()
{
    int arr[10], i;
    
    for(i=0; i<10; i++){
        printf("\nEnter the number into array: ");
        scanf("%d", &arr[i]);
        check(arr[i]);
    }
    printf("your arrays is:");
    for(i=0; i<10; i++){
    printf("%d\t", arr[i]);
    }
}
void check(int num)
{
    if(num%2==0){
        printf("%d is a even number\n", num);
    }
     else{
            printf("%d is a odd number\n", num);
        }

}
