#include <stdio.h>

//0=not prime, 1=prime
int isPrime(int n)
{
    for(int i = 2; i<n;i++){
        if(n%i == 0){
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    printf("4 : %d\n", isPrime(4));
    printf("5 : %d\n", isPrime(5));

    return 0;
}
