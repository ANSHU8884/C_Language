/*
*c program to find number of elements in array
*/
//solution

#include<stdio.h>
void main()
{
	int arr[] = { 10,20,34,44,56,3,5,6 };  //array elements
	int n;
	n = sizeof(arr) / sizeof(arr[0]); //to find number of elements
	printf("number of elements in array:%d", n);
}

