#include <stdio.h>

int sumOfDigits(int n)
{
    int temp = n;
    int sum = 0;
    while(temp != 0){
        sum = sum + temp % 10; // get the reminder
        temp = temp/10; // "take away" the last nr
    }
    return sum;
}

//4+5+6 = 15
//5+5+8+6+2 = 26
int main()
{
    printf("456 : %d\n", sumOfDigits(456));
    printf("55862 : %d\n", sumOfDigits(55862));

    return 0;
}