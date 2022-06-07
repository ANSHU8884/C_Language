 /*
*c program to count frequency of each elements of an array
*/
//solution

#include<stdio.h>
void main()
{
	int arr[6], i, j, count, freq[6]; //variable definition
	printf("enter array elements:");   //read user values
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &arr[i]);
		freq[i] = -1;      //freq  initialize to -1
	}
	for (i = 0; i < 6; i++)   //loop hold element in array
	{
		count = 1;
		for (j = i + 1; j < 6; j++)  //loop look for duplicate elements
		{
			if (arr[i] == arr[j])   //check for repeat elements
			{
				count++;
				freq[j] = 0;    //not to count freq of same elements
			}
		}
		if (freq[i] != 0)
		{
			freq[i] = count;
		}
	}
	printf("\n the freq of elements in array is:\n");
	for (i = 0; i < 6; i++)
	{
		if (freq[i] != 0)   
		{
			printf(" % d = % d \n", arr[i], freq[i]);
		}
	}
	
}

