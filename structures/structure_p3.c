//Program to understand array of structures
#include <stdio.h>
#define SIZE 2 //Edit to change the size of the array
struct student
{
    char name[20];
    int rollno;
    float marks;
};

int main(){
    int fLOOP;
    struct student stuarr[SIZE];
    for(fLOOP=0; fLOOP<2; fLOOP++){
        printf("Enter the name:");
        scanf("%s", &stuarr[fLOOP].name);
        printf("Enter the rollno:");
        scanf("%d", &stuarr[fLOOP].rollno);
        printf("Enter the marks:");
        scanf("%f", &stuarr[fLOOP].marks);
    }
        

    for(fLOOP=0; fLOOP<SIZE; fLOOP++){
        printf("\n~Name: %s\n |Rollno: %d\n |Marks: %.2f\n", stuarr[fLOOP].name, stuarr[fLOOP].rollno, stuarr[fLOOP].marks);
    }
    

};

