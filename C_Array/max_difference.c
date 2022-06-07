/*
*program to find 2 elements in array such that diff between them is largest
*/
//solution

#include<stdio.h>
void main()
{
	int arr[5], i;  //array definition
	int max, min;
	int diff = 0;//variable definition
	printf("enter array elements:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	max = arr[0]; //set maximum to 0th index
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	min = arr[0];  //set minimum to 0th index
	for (i = 0; i < 5; i++)
	{
		if (arr[i] < min)  //condition for checking minimum number
		{
			min = arr[i];
		}

	}
	diff = max - min;
	printf("max element is:%d\n", max);
	printf("min element is:%d\n", min);
	printf("largest diff is :%d", diff);
}


