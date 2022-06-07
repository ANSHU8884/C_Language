/*
*c program to insert element in array
*/
//solution

#include<stdio.h>
void main()
{
	int a[9], i, j, temp1, temp2, n;
	printf("enter array elememts:");
	for (i = 0; i < 8; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 8; i++)   //user input element in array
	{
		for (j = i + 1; j < 8; j++)  //for loop for ascending order
		{
			if (a[i] > a[j])
			{
				temp1 = a[i];  //swapping of elements
				a[i] = a[j];
				a[j] = temp1;
			}
		}
	}
	printf("enter no you want to insert:\n");
	scanf_s("%d", &n);      //user input number to be inserted
	a[8] = n;               //assigning number to be inserted at last index

	for (i = 0; i < 9; i++)   //again sorting in ascending order
	{
		for (j = i + 1; j < 9; j++)  //again sorting in ascending order
		{
			if (a[i] > a[j])
			{
				temp2 = a[i];  //swapping of elements
				a[i] = a[j];
				a[j] = temp2;
			}
		}
	}
	printf("your sorted array is:\n");
	for (i = 0; i < 9; i++)
	{
		printf("%d\n", a[i]);
	}

}

