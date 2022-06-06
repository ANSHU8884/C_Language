/*
*c program to print factorial of a number
*/
//solution
#include<stdio.h>
void main()
{
	int i;    //variable definition
	int n;
	int factorial = 1;       //variable initialization
	printf("enter a number:");  //read user values
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)   //condition
	{
		factorial = factorial * i;   //factorial condition

	}
	printf("factorial of a number is %d\n", factorial);
}



