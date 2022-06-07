/*
*c program to sort only even numbers in given array
*/
//solution

#include<stdio.h>
void main()
{
	int arr[5], i, j, temp;  //variable definition
	printf("enter array elements:");   //read user values
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("sorted even elements are:\n");
	for (j = 0; j < 5; j++)   
	{
		for (i = j + 1; i < 5; i++)
		{
			if (arr[i] % 2 == 0 && arr[j] %2 ==0)  //condition to check even elements 
			{
				if (arr[j]>arr[i])  //condition for sorting array in ascending 
				{
				    temp=arr[j];    //swapping of elements
				    arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
	printf("sorted even array :");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
}

