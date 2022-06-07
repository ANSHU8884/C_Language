/*
*c program to print array in reverse
*/
//solution
#include<stdio.h>
void main()
{
	int arr[6], i;  //array definition
	printf("please enter array elements:");

	for (i = 0; i<6; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements in reverse are:");
	for (i = 5; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
	getch();
}
