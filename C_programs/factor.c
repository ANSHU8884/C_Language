/*
*c program to print factor of a number
*/
//solution
#include<stdio.h>
void main()
{
	int i;           //variable definition
	int n;

	printf("enter the number  :");      //read user value
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)   //condition
	{
		if (n % i == 0)   //condition for factors
		{
			printf("%d\n", i);   //print statement
		}
	}
}
