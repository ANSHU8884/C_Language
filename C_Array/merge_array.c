/*
*c program to merge array elements
*/
//solution
#include<stdio.h>
void main()
{
	int arr1[4], arr2[4], arr3[8],i, j = 0;
	printf("enter elements of array 1:");
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("enter elements of array 2:");
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d", &arr2[i]);
	}
	//copy elemts of array 1 in to array 3
	for (i = 0; i < 4; i++)
	{
		arr3[j] = arr1[i];  
		j++;
	}
	//copy elements of array 2 into array 3
	for (i = 0; i < 4; i++)
	{
		arr3[j] = arr2[i];  
		j++;
	}
	printf("\n elements of merged array:");
	for (i = 0; i < 8; i++)
	{
		printf("%d", arr3[i]);
	}
}
