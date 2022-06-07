/*
*c program to print power of variable
*/
//solution
#include<stdio.h>

void main()
{
	int i;      //variable definition
	int base;
	int exp;
	int power = 1;    //initialization

	printf("enter base no:");   //read user value
	scanf_s("%d", &base);
	printf("enter exponend:");
	scanf_s("%d", &exp);

	for (i = 1; i <= exp; i++)   //condition
	{
		power = power * base;      //power
	}
	printf("%d^%d=%d", base, exp, power);   //print statement
}                                         //end main

