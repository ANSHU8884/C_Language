/*
*c program to find minimum number in array
*/
//solution
#include<stdio.h>
void main()
{
	int arr[5], i, n;   //array definition
	int min;  //variable definition
	printf("enter array elements:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	min = arr[0];  //set minimum to 0th index
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)  //condition for checking minimum number
		{
			min = arr[i];  
		}
		
	}
	printf("\nminimun number=%d", min);

}


