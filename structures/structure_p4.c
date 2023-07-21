//Program to understand arrays within the structure
#include <stdio.h>
#define SIZE 2 //Size of the array of structure

struct student
{
    char name[20];
    int rollno;
    int submarks[4];
};

int main(){
    int fLOOP, sLOOP;
    struct student stuarr[SIZE];
    for(fLOOP=0; fLOOP < SIZE; fLOOP++){
        printf("Enter data for the student %d\n", fLOOP+1);
        printf("Enter the name:");
        scanf("%s", &stuarr[fLOOP].name);
        printf("Enter the rollno:");
        scanf("%d", &stuarr[fLOOP].rollno);
        for(sLOOP=0; sLOOP<4; sLOOP++){
            printf("Enter marks for subject %d:", sLOOP+1);
            scanf("%d", &stuarr[fLOOP].submarks[sLOOP]);
        }
        printf("\n");
    }
    for(fLOOP=0; fLOOP<SIZE; fLOOP++){
        printf("Data of the student: %d\n", fLOOP+1);
        printf("Name: %s, RollNo: %d\n", stuarr[fLOOP].name, stuarr[fLOOP].rollno);
        printf("Marks of student %d\n", fLOOP+1);
        for(sLOOP=0; sLOOP<4; sLOOP++){
            printf("In subject %d: %d",sLOOP+1, stuarr[fLOOP].submarks[sLOOP]);
            printf("\n");
        }
    }

};
