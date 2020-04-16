#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void reverse(int *ch,int n)
{	//reverse array
	int i=0,temp=0;
	int j=n-1;
	for (i=0;i<(n/2);i++)
	{
		temp=ch[j];
		ch[j]=ch[i];
		ch[i]=temp;
		j--;
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",ch[i]);
	}
}
int main() {
	
	// take care of Segmentation
	int n=0,i=0,sum=0;
	scanf("%d",&n);
	int *arr = (int*)malloc(n * sizeof(int));
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
 for (i=0;i<n;i++)
	{S
		sum+=arr[i];
	}
	//printf("%d\n",sum);
	reverse(arr,n);
	
	free(arr);
    return 0;
}

