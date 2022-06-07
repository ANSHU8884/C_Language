/*
*c program to find first and last digit of a number
*/
//solution
#include<stdio.h>

void main()
{
	int i;              //variable definition
	int first;
	int last;
	printf("enter no");              //read user values
	scanf_s("%d", &i);
	last = i % 10;             // % divide by 10 returns last digit of number or remainder
	while (i >= 10)   //condition 
	{
		i = i / 10;        //we divide no by 10 until no is greater than 10 ,gives first digit
	}                     // end while
	first = i;
	printf("first digit is %d\n", first); //print statement
	printf("last digit is %d\n", last);
}                                           //end main

