//Program to understand the pointers in the structures 
#include <stdio.h>
void display();
void inc_marks();
struct student
{
    char name[20];
    int rollno;
    float marks;
};

int main(){
    struct student stu1= {"harry ptr",20, 45.998};
    struct student stu2= {"Kevin", 34, 77.88};
    inc_marks(&stu1);
    inc_marks(&stu2);
    display(&stu1);
    display(&stu2);
}

void inc_marks(struct student *stuptr){
    (stuptr->marks)++;
}
void display(struct student *stuptr){
    printf("Name: %s\t", stuptr->name);
    printf("RollNo: %d\t",stuptr->rollno);
    printf("Marks: %.3f\n", stuptr->marks);
}
