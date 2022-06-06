/*
*c program to print no is perfect or not
*/
//solution
#include<stdio.h>
void main()
{
	int n;     //variable definition
	int i = 1;    //variable initialization
	int sum = 0;     
	printf("enter a number:");  //user values
	scanf_s("%d", &n);
	while (i < n)      //condition
	{
		if (n % i == 0)      //to find divisor
			sum = sum + i;   //addition
		i++;               //increment i

	}               //end while
	if (sum == n)       //condition for perfect number
		printf("%d is perfect number", n);
	else
		printf("%d is not perfect number", n);
}                                              //end main

