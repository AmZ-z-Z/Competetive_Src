// Plaindrome solution on LeetCode platform 
// Problem URL : https://leetcode.com/problems/palindrome-number/
// plaindrome number is numbeer that Read the same form Right to Left
// and vice versa
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
// take care that reserved word for true/false are lower case words

char * int2str(int num, int base)
{	
	int len=0;		//length 	
	int rem=0;     //reminder
	int i; 
	char str [65535]; //string with max integer size
 	//these function will convert integer with undefined size to string
	//first we need the size of these integer as matter of string (How many digit !)
	while (num)
	{
		len++;
		num/=base; // as 10 is base for the decimal
	}
	for (i=0;i<len;i++)
	{
		rem= num % base;
		num/=base;
		str[len-(i+1)]= rem + '0'; // we add to '0' as convert the number to character which '0'
		// which represent 48 in ascii code as start of number representation .
		// len -(i+1) to reverse the string and assign it value at same time 
	}
	str[len]='/0';  //termination of string 
	printf(" Heloooooow i was here \n");
	return str;

}
int isPalindrome(int x)
{ 
	char str[65535]; // max size for integer
	int i=0,j;
	bool flag= true;
	sprintf(str,"%d",x);// New function to change integer to string
	// palindrome process 
	j =strlen(str)-1;
	while ((str[i] != '\0') && (i != (strlen(str))/2))
	{
		if (str[i]==str[j])
		 {
			 i++;
			 j--;
		 }
		 else
		 {
			 flag=false;
			 break;
		 }
	}
	return flag;
}

int main ()
{
	int num = 122;
	bool result =isPalindrome(num);
	printf("the resuit is %s ",result ?"TRUE":"FALSE"); // workaround print Boolean specified format
	return 0;
}
