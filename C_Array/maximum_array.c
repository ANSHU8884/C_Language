/*
*c program to print maximum number in array
*/
//solution
#include<stdio.h>
void main()
{
	int arr[5], i;  //array definition
	int temp;          //variable definition
	printf("enter array elements:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	temp = arr[0]; //set maximum to 0th index
	for (i = 0; i < 5; i++)
	{
		if (arr[i]>temp)
		{
			temp = arr[i];
		}
	}
	printf("maximum array element is:%d", temp);
}

