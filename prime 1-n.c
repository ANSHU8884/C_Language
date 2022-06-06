/*
 *c program to print prime number between 1 to n
*/
//solution
#include<stdio.h>
void main()
{
	int i;   //variable definition 
	int n;
	int j;
	int count;
	printf("enter a number:");  //read user value
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++)  //for loop for printing no from 1 to n
	{
		count = 0;       //variable initialization
		for (j = 1; j <= i; j++)   //for loop condition for prime number
		{
			if (i % j == 0)     //check prime number or not
			{
				count++;     //increment count
			}               //end if
		}                  //end for
		if(count==2)   //as prime number count is 2 count=2	
		{
			printf("%d\n", i);
		}                         //end if  
	}                           
}                                 //end main

