/*
*c program to enter a number and print it in words
*/
//solution
#include<stdio.h>
void main()
{
	int i;  //variable definition
	int n;
	int rev = 0;  //variable initialization
	printf("enter a no:");
	scanf_s("%d", &n);
	while (n > 0)   //condition
	{
		i = n % 10;     //find remainder
		rev = rev * 10 + i;
		n = n / 10;
	}
	while (rev > 0)
	{
		switch (rev % 10)   //open switch
		{
		case 0:printf("zero");
			break;
		case 1:printf("one");
			break;
		case 2:printf("two");
			break;
		case 3:printf("three");
			break;
		case 4:printf("four");
			break;
		case 5:printf("five");
			break;
		case 6:printf("six");
			break;
		case 7:printf("seven");
			break;
		case 8:printf("eight");
			break;
		case 9: printf("nine");
			break;     //end switch
		}
		rev = rev / 10;
	}
	


}

