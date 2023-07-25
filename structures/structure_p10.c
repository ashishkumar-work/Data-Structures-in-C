//Program to undertsnad how a pointer to structure is returned from a function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void display();
struct student
{
    char name[20];
    int rollno;
    float marks;
};
struct student *func();
struct student *ptr;

int main(){
    struct student *stuptr;
    stuptr = func();
    display(stuptr);
    free(stuptr);
}
struct student *func(){
    ptr = (struct student *)malloc(sizeof(struct student));
    strcpy(ptr->name, "Frodo");
    ptr->rollno = 16;
    ptr->marks = 91;
}
void display(struct student *stuptr){
    printf("Name: %s\t", stuptr->name);
    printf("RollNo: %d\t", stuptr->rollno);
    printf("Marks: %.2f\n", stuptr->marks);
}
