/*
*c program to calculate sum of digit of a number
*/
//solution
#include <stdio.h>
void main()
{
	int n, rem;     //variable definition
	int sum = 0;    //sum initialized to 0
	printf("enter number");  //read user value
	scanf_s("%d", &n);
	while (n != 0)
	{
		rem = n % 10;  //% gives remainder
		sum = sum + rem;  //addition
		n = n / 10;          //remove last digit from no by dividing 10
	}                    //end while
	printf("sum of digit=%d\n", sum);
}                                        //end main
