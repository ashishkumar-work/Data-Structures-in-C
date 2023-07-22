//Program to understand how structure members are sent to a function
#include <stdio.h>
#include <string.h>
void display(char name[], int rollno, float marks);
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main(){
    struct student stu1 = {"friendly mary", 16, 56.899};
    struct student stu2;
    strcpy(stu2.name, "Goofy golf");
    stu2.rollno = 14;
    stu2.marks = 69.6999;

    display(stu1.name, stu1.rollno, stu1.marks);
    display(stu2.name, stu2.rollno, stu2.marks);
}

void display(char name[], int rollno, float marks){
    printf("Name: %s\n", name);
    printf("RollNo: %d\n", rollno);
    printf("Marks: %.2f\n", marks);

};
