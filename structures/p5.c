//Program to understand pointers to structures 
#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};

int main(){
    struct student stu1 = {"Friendly Mary", 11, 69.999};
    struct student *ptr = &stu1;
    printf("Name: %s\n", (*ptr).name);  //Dot operator
    printf("RollNo: %d\n", ptr->rollno); //Arrow operator
    printf("Marks: %.2f", ptr->marks);

};
