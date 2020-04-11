// this problem for converting string to integer usign pre-defined function <Strtol> 
// pre-defined function exit() introduced for educational prupose 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char str[10]= "123Hello";
	int num,base=10;
	char *ptr;
	num =strtol(str,&ptr,base);
	printf (" just for sure %x\n",&ptr);
	printf (" just for sure %p \n",ptr);
	// we should send the address of pointer not what it whats it point to :D
	printf ("the string part is %s\n",ptr);
	printf ("the Numerical part is %d :\n ",num);
	if (!num)
	{
		printf ("Exit the program");
		exit(0);
	}
return 0;
}
