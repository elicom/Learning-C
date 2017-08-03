#include <stdio.h>

int main()
{
    int i = 1;          // i has the value 1
    int *ptr;           // a pointer is created
    ptr = &i;           // pointer is equal to address of i

    // print "value at pointer" and pointer
    printf("%d %p",*ptr,ptr);  
    
    return 0;
}