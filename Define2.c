#include <stdio.h>

#define VALUE 10

int main()
{
    printf("%d  \n",VALUE); // 10
    #define VALUE 20
    printf("%d  \n",VALUE); // 20
    return 0;
}