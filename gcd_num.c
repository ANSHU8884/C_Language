/*
*c program to print gcd of two numbers
*/
//solution
#include<stdio.h>

void main()
{
	int n1, n2, i;   //variable definition
	int min, gcd;
	printf("first no is:");    //read user value
	scanf_s("%d", &n1);
	printf("second no is:");
	scanf_s("%d", &n2);
	if (n1 < n2)        //condition
	{
		min = n1;
	}
	else
	{
		min = n2;
	}
	for (i = 1; i <= min; i++)  //for loop condition
	{
		if (n1 % i == 0 && n2 % i == 0)   //condition for gcd
		{
			gcd = i;
		}                  //end if
	}                             //end for 
	printf("%d", gcd);
}                            //end main
