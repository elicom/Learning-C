#include <stdio.h>

//if even
//return true
//else
//resurn false
int isEven(int number)
{
    if(number%2 == 0)
        return 1;
    
    return 0;
}


int main()
{
    printf("4: %d \n", isEven(4));
    printf("5: %d \n", isEven(5));
    return 0;
}