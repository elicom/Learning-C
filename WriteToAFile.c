#include <stdio.h>

//structure of a student
struct Student
{
    char name[100];
    int marks;
    int year;
};

//write the info in a student
void writeStudentToFile(struct Student student)
{
    //get a pointer to the open file
    FILE *fp = fopen("Student.txt","w");
    //write to the file
    fprintf(fp, "%s %d %d\n",
    student.name,student.marks,student.year);
    
    //close the file
    fclose(fp);
}

int main()
{
    //create a student
    struct Student student = {"Sara", 100, 4};
    struct Student student2 = {"Kalle", 50, 1};
    
    student.year = 3; //change year of student
    
    writeStudentToFile(student);
    writeStudentToFile(student2);
}