/*
*c program to print perfect numbers from 1 to n
*/
//solution
#include<stdio.h>
void main()
{
	int i, j, n;                //variable definition
	int sum;
	printf("enter a number:");  // read user value
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)       //condition for 1 to n
	{
		sum = 0;             //variable initialization
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)    
			{
				sum = sum + j;   //addition
			}
		}
		if (sum == i)   //condition for perfect number
		{
			printf("%d\n", i);
		}
	}
}
