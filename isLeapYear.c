#include <stdio.h>

//%4 = Leap year
//exceptions 1900,2000,2100,2200,2300,2400...

// 0-false, 1-true
int isLeapYear(int year)
{
    //2 conditions to test the exception-years
    if(year % 400 == 0)
        return 1;
        
    if(year % 100 == 0)
        return 0;
    
    //"normal year"-check
    if(year % 4 == 0)
        return 1;
    
    return 0;
}

int main()
{
    printf("2000: %d \n", isLeapYear(2000));
    printf("1900: %d \n", isLeapYear(1900));
    printf("1904: %d \n", isLeapYear(1904));
    printf("2006: %d \n", isLeapYear(2006));
    printf("1988: %d \n", isLeapYear(1988));
    return 0;
}