//Program to understand how an array of structures is sent to a functiom
#include <stdio.h>
void display();
void dec_marks();

struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct student stuarr[3] = {
        {"Ben", 12, 90},
        {"Moira", 16, 81},
        {"shrill", 18, 97}
    };
    dec_marks(stuarr);
    for(int i=0; i<3; i++){
        display(stuarr[i]);
    }
}
void dec_marks(struct student stuarr[]){
    for(int i=0; i<3; i++){
        stuarr[i].marks = stuarr[i].marks -10;
    }
}
void display(struct student stu){
    printf("Name: %s\t",stu.name);
    printf("RollNo: %d\t", stu.rollno);
    printf("Marks: %f\n", stu.marks);
}