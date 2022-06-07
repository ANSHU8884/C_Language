/*
*c program to return position of palindrome element in array
*/
//solution

#include<stdio.h>
void main()
{
	int a[5], i, rev, temp,rem;  //variable definition

	printf("enter elements in the array:");   //read user input
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("The position of pallindrome in the array are:\n");
	for (i = 0; i < 5; i++)
	{
		temp = a[i];   //initially store array in temp 
		rev = 0; 
		while (a[i] > 0)
		{
			rem = a[i] % 10;   //print last digit of array element
			rev = rev * 10 + rem;  
			a[i] = a[i] / 10;  //print first digit of array element 
		}
		if (rev == temp)  //condition for palindrome element
		{
			printf("%d\n", i);  //print index
		}
	}
}
