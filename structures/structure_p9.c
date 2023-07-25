//Program to understand how structure variables are returned from a function
#include <stdio.h>
void display();
struct student
{
    char name[20];
    int rollno;
    float marks;
};
struct student change();
int main(){
    struct student stu1 = {"Gollum", 34, 98.9989};
    struct student stu2 = {"Gandalf", 44, 88.69};
    stu1 = change(stu1);
    stu2 = change(stu2);
    display(stu1);
    display(stu2);
}
struct student change(struct student stu){
    stu.marks = stu.marks +10;
    stu.rollno = stu.rollno -5;
    return stu;
}
void display(struct student stu){
    printf("Name: %s\t", stu.name);
    printf("RollNo: %d\t", stu.rollno);
    printf("Marks: %.3f\n", stu.marks);
}
