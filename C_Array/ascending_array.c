/*
*c program to print array in ascending order
*/
//solution
#include<stdio.h>
void main()
{
	int arr[5], j,i;  //array definition
	int temp;   //variable definition
	printf("enter array elements:");
	for (i= 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (j = 0; j < 5; j++)
	{
		for (i = j + 1; i < 5; i++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[j];  //swapping of array
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("array in ascending order:");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
}

