/*
*write c program to print all natural numbers from 1 to 100 in reverse

//solution

#include<stdio.h>

void main()
{
	int i;        //variable definition
	printf("enter value of n:\n");  //enter user value
	scanf_s("%d\n", &i);

	
	while (i>=1)
	{
		printf("%d\n", i);
		i--;                 //decrement i
	}               //end while

}                  //end main


