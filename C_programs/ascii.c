/*
*c program to print all ASCII character with their values
*/
//solution
#include<stdio.h>

void main()
{
	int n;    //variable definition
	n = 0;           //variable initialization
	while (n <= 225) //condition
	{
		printf("ASCII value of char is%c=%d\n", n, n);  //print statement
		n++;          //increment
	}        //end while
	
}          //end main
