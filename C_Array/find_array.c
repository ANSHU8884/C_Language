/*
*c program to find element in array
*/
//solution
#include<stdio.h>
void main()
{
	int arr[5], i;  //array definition
	int flag = 0;   //variable initialization

	printf("enter array elements:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);

	}
	int n;
	printf("element to be found:");
	scanf_s("%d", &n);
	for (i = 0; i < 5; i++)
	{
		if (n == arr[i])
		{
			flag = 1;
			printf("%d found", n);
			break;
		}
	}
		
	if (flag==0)
	{
        Printf(“%d not found”);
    }

