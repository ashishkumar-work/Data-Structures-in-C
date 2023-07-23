//Program to understand how a structure variable is sent to a function
#include<stdio.h>
void display();
struct student
{
    char name[20];
    int rollno;
    float marks;
};


int main(){
struct student stu1 ={"belly bob", 12, 55.6699};
struct student stu2 ={"ready rohit", 21, 77.99899};
display(stu1);
display(stu2);
}

void display(struct student stu){
    printf("Name: %s\n",stu.name);
    printf("RollNo: %d\n", stu.rollno);
    printf("Marks: %.3f\n", stu.marks);
}
