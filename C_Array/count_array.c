/*
*c program to count no of elements less, greater than and equal to 0
//solution

#include<stdio.h>
void main()
{
	int a[7], i;   //definition 
	int pcount, ncount, zcount;   //variable definition
	printf("enter array elements:");   //read user input
	for (i = 0; i < 7; i++)
	{ 
		scanf_s("%d", &a[i]);
	}
	pcount = 0;  //initizalize count to 0
	for (i = 0; i < 7; i++)
	{ 
		if (a[i] > 0)   //condition for greater than 
		{
			pcount++;
		}
	}
	printf("total positive integers are:%d\n", pcount);
	ncount = 0;   //initiualize count to zero
	for (i = 0; i < 7; i++)
	{
		if (a[i] < 0)  //condition for less than
		{
			ncount++;   //incremenet count
		}
	}
	printf("total negative integers are:%d\n", ncount);
	zcount = 0;            //initialize count to 0
	for (i = 0; i < 7; i++)
	{
		if (a[i] == 0)
		{
			zcount++;   //increment count
		}
	}
	printf("total integers equal to zero are:%d\n", zcount);
}

