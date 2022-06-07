/*
*c program to enter a number and print its reverse
*/
//solution
#include<stdio.h>

void main()
{
	int n;       //variable definition
	int ans = 0;  //variable initialization
	int rem;
	printf("enter a number:");    //user values
	scanf_s("%d", &n);
	while (n > 0)     //condition
	{
		rem = n % 10;         //to ptint last digit
		ans = ans * 10 + rem;      //answer
		n = n / 10;             //to print first digit
		printf("%d\n", ans);
	}

}
