/*
*c program to print number is strong or not
*/
//solution
#include<stdio.h>
void main()
{
	int n;   //variable definition
	int fact;
	int j;
	int i;
	int sum;
	int temp;
	printf("enter a number:");
	scanf_s("%d", &n);
	temp = n;           //copy to temp variable for calculation
	sum = 0;       //initialization
	while (n > 0)
	{
		i = n % 10;     //find last digit
		fact = 1;
		for (j = 1; j <= i; j++)         // find factorial 
		{
			fact = fact * j;      //factorial
		}
		sum = sum + fact;           //add factorial to sum
		n = n / 10;                //first digit
	}
	if (sum == temp)      //condition to check strong number or not
	{
		printf("%d is strong number", temp);
	}
	else
	{
		printf("%d is not strong number:", temp);
	}
}                                               //end main

