28]
/*
*c program to print sum of prime number
*/
//solution
#include<stdio.h>
void main()
{
	int i;   //variable definition 
	int n;
	int j;
	int count;
	int sum = 0;     //initialization
	printf("enter a number:");  //read user value
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++)  //for loop for printing no from 1 to n
	{
		count = 0;       //variable initialization
		for (j = 2; j <= i/2; j++)   //for loop condition for prime number
		{
			if (i % j == 0)     //check prime number or not
			{
				count++;     //increment count
			}               //end if
		}                  //end for
		if (count == 0)                   
		{
			sum = sum + i;        //addition
		}                         //end if  
	}
	printf("%d\n",  sum);
}                                 //end main
