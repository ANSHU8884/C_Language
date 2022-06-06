/*
*c program to calculate product of digit of a number
*/
//solution
#include<stdio.h>
void main()
{
	
	int i;    //variable definition
	int n;
	int mul = 1;    //variable initialization
	printf("enter number:\n"); //read user value
	scanf_s("%d\n", &n);

	while (n != 10)   //condition
	{
		i = n % 10;    //% gives remainder 
		mul = mul*i;        //multiplication 
		n = n / 10;     //removes last digit from number
		printf("%d\n", mul);
	}
