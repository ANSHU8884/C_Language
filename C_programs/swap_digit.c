/*write a c program to swap first and last digits of a number
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int first, last, temp;
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	last = n % 10;
	while (n > 10)
	{
		n = n / 10;
	}
	first = n;
	printf("first digit is:%d\n", first);
	printf("last digit is:%d\n", last);

	temp = first;
	first = last;
	last = temp;

	printf("after swapping first digit is:%d\n", first);
	printf("after swapping last digit is:%d\n", last);
	getch();
}

