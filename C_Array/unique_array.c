/*
*c program to print unique elements 
*/
//solution

#include<stdio.h>
void main()
{
	int arr[6], i, j, k, count;   //variable definition
	printf("enter array elements:");   //read user input
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 6; i++)    
	{
		count = 0;    //count initialize to 0
		for (k = i - 1; k >= 0; k--)
		{
			if (arr[i] == arr[k])   //condition to check repeat elements
			{
				i++;         //incrememt i
			}
		}
		for (j = 0; j < 6; j++)
		{
			if (arr[i] == arr[j])   //check condition for repeat elements in array
			{
				count++;   //increment count
			}
		}
		if (count == 1)          //check condition of unique elements
		{
			printf("unique elements are %d\n", arr[i], count);
		}

	}
}


