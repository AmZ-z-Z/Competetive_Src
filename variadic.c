#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

 /* function Declartion */
int min (int count,...);
int max (int count,...);
/* Declare Max and min value would be used */

#define MAX_V 10000
#define MIN_V 0

int main ()
{
	printf (" Minimum of ( 4,10,2,5,55) is %d \n",min(5,10,2,5,55,4));
	printf (" Minimum of ( 4,10,2,5,55) is %d \n",max(5,10,2,5,55,4));
	
	return 0;
}

int min (int count,...)
{
	int miN=10000,i=0,cur=0;
	va_list values;
	
	va_start(values,count);
	for (i=0;i<count;i++)
		{
			cur=va_arg(values,int); // Data type used should be Returned
			if (miN>cur)
				{
					miN=cur;
				}
		}
	va_end(values);
	return miN;
}

int max (int count,...)
{
	int maX=MIN_V,i=0,cur=0;
	va_list values;
	
	va_start(values,count);
	for (i=0;i<count;i++)
		{
			cur=va_arg(values,int); // Data type used should be Returned
			if (maX<cur)
				{
					maX=cur;
				}
		}
	va_end(values);
	return maX;
}
