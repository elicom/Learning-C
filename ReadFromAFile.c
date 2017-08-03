#include <stdio.h>

//structure of a student
struct Student
{
    char name[100];
    int marks;
    int year;
};

struct Student readStudentFromFile()
{
    //get a pointer to the open file
    FILE *fp = fopen("Student.txt","r");
    struct Student student;
    
    //read to the file
    fscanf(fp, "%s %d %d\n",
    student.name,&student.marks,&student.year);
    
    //close the file
    fclose(fp);
    
    return student;
}

void printStudent(struct Student student)
{
    printf("%s %d %d \n", 
    student.name,student.marks,student.year);
}

int main()
{
    //get a student from a file
    struct Student student =  readStudentFromFile();
    printStudent(student);
    return 0;
}