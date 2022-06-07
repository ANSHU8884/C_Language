/*
*c program to sort 1st half array in ascending and 2nd half array in descending order
*/
//solution

#include<stdio.h>
void main()
{
	int a[6], i, j, temp;  //definition of variable
	printf("enter array elements:"); //read user values
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 3; j++)  //condition for 1st half array in ascending 
		{
			if (a[j] > a[j + 1])   //condition for ascending order
			{
				temp = a[j];  //swapping of array elements
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		for (j = 3; j < 6; j++)  //condition for 2nd half array in descending 
		{
			if (a[j] < a[j + 1])   //condition for descending order
			{
				temp = a[j];    //swapping of array elements
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}

	}
	printf("after sorting array is:\n");
	for (i = 0; i < 6; i++)
	{
		printf("%d\n", a[i]);
	}
}


