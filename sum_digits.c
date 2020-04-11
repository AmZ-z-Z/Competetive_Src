// sum of number digits  
// HackerRank platform 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	// by considring base is 10 Decimal 
    int n,rem,sum=0;
    printf ("number is ");
    scanf("%d", &n);
    while (n)
    {
		rem= n%10;
		sum+=rem;
		n/=10;
	}
	printf ("the sum is  %d\n",sum);
    return 0;
}
