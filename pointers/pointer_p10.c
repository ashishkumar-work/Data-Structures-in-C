//An array passed into a function and the receiving argument is declared as a pointer
#include<stdio.h>
void func();
int main()
{
    float f_arr[5]={1,3.5,5.7,6.8,9.9};
    int i_arr[5]={2,4,6,8,10};
    char c_arr[5]={'a','f','s','z','x'};
    printf("size of f is %u\t", sizeof(f_arr));
    printf("size of i is %u\t", sizeof(i_arr));
    printf("size of c is %u\t", sizeof(c_arr));
    func(f_arr, i_arr, c_arr);
}
void func(float f[], int *i, char c[5]){
    printf("size of f is %u\t", sizeof(f));
    printf("size of i is %u\t", sizeof(i));
    printf("size of c is %u\t", sizeof(c));

}                         //ERORR
                                                                /*p10.c: In function 'func':
p10.c:15:39: warning: 'sizeof' on array function parameter 'f' will return size of 'float *' [-Wsizeof-array-argument]
     printf("size of f is %u\t", sizeof(f));
                                       ^
p10.c:14:17: note: declared here
 void func(float f[], int *i, char c[5]){
                 ^
p10.c:17:39: warning: 'sizeof' on array function parameter 'c' will return size of 'char *' [-Wsizeof-array-argument]
     printf("size of c is %u\t", sizeof(c));
                                       ^
p10.c:14:35: note: declared here
 void func(float f[], int *i, char c[5]){
                                   ^*/
    
