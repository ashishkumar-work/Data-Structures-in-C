//Program to assign a structure variable to another structure variable
#include<stdio.h>

    struct student
    {
        char name[20];
        int rollno;
        float marks;
    };
int main(){
    struct student stu1 = {"logan", 14, 69.69}, stu2;
    stu2 = stu1;
    printf("Stu1 : %s  %d  %.2f\n", stu1.name, stu1.rollno, stu1.marks);
    printf("Stu2 : %s  %d  %.2f", stu2.name, stu2.rollno, stu2.marks);

};