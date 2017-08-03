#include <stdio.h>

int addOne(int a[]){
    a[1]++;
}

int main()
{
    int marks[]={34,45,67};
    printf("marks[1]: %d \n",marks[1]);
    addOne(marks);
    printf("marks[1]: %d \n",marks[1]);
    return 0;
}