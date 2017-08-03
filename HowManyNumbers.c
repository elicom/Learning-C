#include <stdio.h>

int numberOfDigits(int n)
{
    int temp = n;
    int count = 0;
    while(temp != 0){
        count++;
        temp = temp/10;
    }
    return count;
}

int main()
{
    printf("-456 : %d\n", numberOfDigits(-456));
    printf("55862 : %d\n", numberOfDigits(55862));

    return 0;
}