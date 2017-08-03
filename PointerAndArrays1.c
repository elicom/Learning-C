#include <stdio.h>

int main()
{
	int numbers[] = {1,2,3,4,5}; //numbers is a pointer
	int *ptr = numbers;
	
	printf("%p %p\n", numbers, ptr);
	printf("%d", *numbers); //first value in numbers
}