#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c) 
{	

	if (n == a)
	{
	return a;
	}
	else if (n==b)
	{
		return b;
	}
	else if (n == c )
	{
		return c;
	}
	else
	{	
		return (find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c));
	}
}

int factorial(int n)
{	
	if (n==1)
	{
		return 1;
	}
	else if (n ==0)
	{
		return 0;
	}
	else 
	{	
		return ( n*factorial(n-1));
	}
}
int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
	//int ans =factorial(6);
    printf("%d", ans); 
    return 0;
}
