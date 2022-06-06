/*
*write c program to print all natural numbers from 1 to 100
*/

//solution

#include<stdio.h>

void main()
{
	int i = 1;        //variable definition
	printf("print all natural numbers between 1 to  100:");   
	
	i = 1;                //initialization
	while (i <= 100)
	{
		printf("%d\n", i);
		i++;                //increment i
	}               //end while
	
}                  //end main

