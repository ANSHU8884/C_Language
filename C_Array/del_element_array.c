/*
*c program to delete an element at desired position from array
*/
//solution

#include<stdio.h>
void main()
{
	int arr[8], i, position;   //variable definition
	printf("enter array elements:");  //read user value
	for (i = 0; i < 8; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("enter position from where you want to delete element:\n");
	scanf_s("%d", &position);
	for (i = position - 1; i < 7; i++)  //condition for deletion
	{
		arr[i] = arr[i + 1];  //shifting index to right side
	}
	printf("array after deletion:");
	for (i = 0; i < 7; i++)
	{
		printf("%d\n", arr[i]);
	}
}
