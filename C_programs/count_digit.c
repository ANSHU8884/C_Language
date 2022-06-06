/*
*c program to count a number of digit in a number
*/
//solution

#include<stdio.h>

void main()
{
	int n;      //variable definition
	int count = 0;             //initially count is 0
	printf("enter the number:");     //read user value
	scanf_s("%d", &n);
	while (n != 0)           //condition 
	{
		n = n / 10;             //remove last digit from  n in each time  
		count++;                // increment count
	}                             //end while
	printf("%d", count);
}                               //end main

