/*
*c program to copy elements of one array  in another array
*/
//solution

#include<stdio.h>
void main()
{
	int arr1[5], arr2[5], i;  //array definition

	printf("enter elements of first array:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
		arr2[i] = arr1[i];     //copy array 1 into array 2
	}
	printf("copied array elements are:");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr1[i], arr2[i]);
	}
}



