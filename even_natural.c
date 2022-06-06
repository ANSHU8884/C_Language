/*
*write c program to print all even natural numbers from 1 to 100
*/

//solution
#include<stdio.h>

void main()
{

	int i;             //variable definition
	int n;
	i = 2;             // variable initialization
	printf("all even natural no between 1 to 100 are:");     //read user value
	
	i = 2;     //for sum no i=2
	
	while (i <= 100)      //upto 100
	{

		printf("%d\n", i);
		i += 2;               //increment i by 2
	}                 //end while
	
}                    //end main


