/*
*c program to print second higher number in array
*/
//solution

#include<stdio.h>
void main()
{
	int arr[5], i;  //array definition
	int max1 = 0, max2 = 0;     //variable definition
	printf("enter array elements:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > max1)   
		{
			/*
			*if current element is first largest then
			*make current max as second max
			* and max as current array element
			*/
			max2 = max1;       
			max1 = arr[i];   
		}
		
	}
	printf("2nd largest :%d", max2);
}

