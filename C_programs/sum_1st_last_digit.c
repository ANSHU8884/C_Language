/*
*c program to find sum of first and last digit of a number
*/
//solution
#include<stdio.h>
void main()
{
	int i;             ///variable definition
	int fist;
	int last;
	int sum;
	printf("enter a number:");   //user values
	scanf_s("%d", &i);
	last = i % 10;  //% divides number gives last value or remainder
	while (i >= 10)
	{
		i = i / 10;   // divides number by 10 until no greater than 10 gives first digit
	}                             //end while
	fist = i;
	printf("first number is:%d\n", fist);  //print number
	printf("last number is:%d\n", last);
	sum = last + fist;    //addition of first and last no
	printf("sum of first and last digit is=%d", sum);
}                                                     //end main

