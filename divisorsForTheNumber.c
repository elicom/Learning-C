#include <stdio.h>

void printDivisors(int num)
{
    for(int i = 2; i< num; i++){ // 2 to n-1
        if(num % i == 0){
            printf("%d \n",i);
        }
    }
}

//12 - 2,3,4,6
int main()
{
    printDivisors(12);
    return 0;
}