#include <stdio.h>

// num = 5, 2+4+6+8+10=30
//from 2 to n
//adding them 
int calculateSumEvenNumUpto(int num)
{
    int result = 0;
    
    for(int i = 2; i <= num*2; i=i+2)
    {
        result = result + i;
    }
    return result;
}

int main()
{
    printf("upto 5: %d \n", calculateSumEvenNumUpto(5));
    printf("upto 10: %d \n", calculateSumEvenNumUpto(10));
    return 0;
}