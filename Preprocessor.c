#include <stdio.h>

#define MAX(a,b) a>b?a:b    // is a>b ? true = a false = b

int main()
{
    int i=5, j=6;
    printf("%d  \n",MAX(++i,++j));   // 8, ++i>++j:++i:++j
    printf("%d %d \n",i,j); // 6 8
    return 0;
}