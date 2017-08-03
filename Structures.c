#include <stdio.h>

//structure of a student
struct Student
{
    char name[100];
    int marks;
    int year;
};

//print the info in a student
void printStudent(struct Student student)
{
    printf("Name: %s \n",student.name);
    printf("Marks: %d \n",student.marks);
    printf("Year: %d \n",student.year);
}

int main()
{
    //create a student
    struct Student student = {"Sara", 100, 4};
    struct Student student2 = {"Kalle", 50, 1};
    
    student.year = 3; //change year of student
    
    printStudent(student);
    printStudent(student2);
}