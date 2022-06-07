/*
*c program to print sum of all elements in array
*/
//solution

#include<stdio.h>
void main()
{
	int arr[5], i;  //array definition
	int sum = 0;     //variable definition
	printf("enter array elements:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + arr[i];  //sum of array
	}
	printf("sum of array is:%d", sum);
}

