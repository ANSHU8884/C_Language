/* 
 *write a c program to check whether a number is Armstrong number or not
   */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, ans;
	int sum = 0;
	int temp;
	printf("Enter the number:");
	scanf("%d", &n);
	temp = n;
	while (n > 0)
	{
		ans = n % 10;
		sum = sum + (ans * ans * ans);
		n = n / 10;
	}
	if (temp == sum)
	{
		printf("Armstrong number\n");
	}
	else
	{
		printf("not armstrong number\n");
	}
	getch();
}

