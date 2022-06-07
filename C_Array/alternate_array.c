/*
*c program to print alternate elements in array
*/
//solution
#include<stdio.h>
void main()
{
	int arr[6], i;
	printf("enter array elements:");
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("alternate array elements are:\n");
	for (i = 0; i < 6; i+=2)
	{
		printf("%d\n", arr[i]);
	}
}
