/***** Two sums problem @Leetcode platform ******/
// Using Heap memory to avoid invalid segmentation 
// we need to free the allocated memory to avoid memory leak
// LeedCode platform URL : https://leetcode.com/problems/two-sum/submissions/
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,x;
    int *result;
    for (i=0;i<numsSize;i++)
    {
        for (x=i+1;x<numsSize;x++)
        {
        if (nums[i]+nums[x]==target)
			{
			result = (int*)malloc(sizeof(int)*2);
			if (result== NULL)
			{   
				// Flag for validation of heap Memory
				printf("****Error in Dynamic Memory****");
			}
			else
			{
			//printf("%d\n%d\n",i,x);
			result[0]=i;
			result[1]=x;
			*returnSize =2;
			return result;
			}
            
			}
       }
    }	
		*returnSize =2; // In case for invalid process ,indication flag 
		return  NULL ;
}
int main ()
{
	int array[3]={3,2,4};
	int target =6;
	int size;  // size for Return Solution
	int *sol;
	sol = twoSum(array,3,target,&size);
	printf(" the Return size is %d \n the two numbers index are %d %d\n",size,sol[0],sol[1]);
	free(sol); // free the Dynamic pointer which point to same address of local function
	return 0;
}
