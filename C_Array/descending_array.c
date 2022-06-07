/*
*c program to print array in descening order
*/
//solution
#include<stdio.h>
void main()
{
	int arr[5], i, j, n; //array definition
	int temp;           //variable definition
	
	printf("enter array elements:");
	
	for (n = 0; n < 6; n++)
	{
		scanf_s("%d", &arr[n]);
	}
	for (j = 0; j < 6; j++)
	{
		for (i = j + 1; i < 6; i++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[j];  //swapping array elements
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("array in descending order:");
	for (n = 0; n < 6; n++)
	{
		printf("%d\n", arr[n]);
	}
}
