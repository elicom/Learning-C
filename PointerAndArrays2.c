#include <stdio.h>

int main()
{
	char *charptr = "Dummy";
	char chararray[] = {'D','u','m','m','y','\0'};
	char chararraystring[] = "Dummy";
	
	printf("%s %s %s", charptr,chararray,chararraystring); 
}