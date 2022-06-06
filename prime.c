/*
*c program to check given number is prime or not
*/
//solution
#include<stdio.h>
void main()
{
	int i;    //variable definition
	int n;
	printf("enter a number:");     //read user values
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++)  //loop for prime number
	{
		if (n % i == 0)   //condition for prime number
		{
			printf("%d is not prime  number\n", n);
			break;
		}
		else
		{
			printf("%d is prime number\n", n);
			break;
		}                    
	}                  //end for
}                  //end main

