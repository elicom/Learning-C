#include <stdio.h>

// num = 5, 1+2+3+4+5=15
//from 1 to n
//adding them 
int calculateSumUpto(int num)
{
    int result = 0;
    for(int i = 1; i <= num; i++)
    {
        result = result + i;
    }
    return result;
}

int main()
{
    printf("upto 5: %d \n", calculateSumUpto(5));
    printf("upto 10: %d \n", calculateSumUpto(10));
    return 0;
}