/*
*c program to print lcm of two numbers
*/
//solution
#include<stdio.h>
void main()
{
	int n1, n2;    //variable definition
	int max;
	printf("enter first no:");      //reas user value
	scanf_s("%d", &n1);
	printf("enter second no:");
	scanf_s("%d", &n2);

	if (n1 < n2)   //if condition to check number is maximun or not
	{
		max = n1;
	}
	else
	{
		max = n2;
	}
	while (1)       //1 is for to avoid infinite loop
	{
		if (max % n1 == 0 && max % n2 == 0)   //condition for lcm 
		{
			printf("%d\n", max);
			break;
		}
		max++;            //increment max
	}
}
