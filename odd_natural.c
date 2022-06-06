/*
*write c program to print all odd natural numbers from 1 to 100
*/

//solution

#include<stdio.h>

void main()
{

	int i = 1;     // variable initialization

	printf("all odd natural no between 1 to 100 are:");   //user values

	i = 1;   //for odd i=1

	while (i<=99)      //upto 99
	{

		printf("%d\n", i);
		i += 2;                       //increment i by 2
	}                            //end while
	
}                              //end main

