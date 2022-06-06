/*
*c program to check no is palindrome or not
*/
//solution
#include<stdio.h>

int main()
{
	int a;             //variable definition
	int n;
	int ans = 0;         //variable initialization
	int rem;
	a = n;
	while (n > 0)   //condition
	{
		rem = n % 10;   //to print last digit of number
		ans = ans * 10 + rem;   //answer
		n = n / 10;               //to print first digit of number
		printf("%d\n", ans);
	}                          //end while
	if (a == ans)  //condition to check no is palindrome
	{
		printf("%d is palindrome", a);
	}
	else                //end else
	{
		printf("%d is not palindrome", a);
	}                  //end else
	return 0;
}                       //end main
