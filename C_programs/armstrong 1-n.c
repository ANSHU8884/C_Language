/* 
*write a c program to print all Armstrong number between 1 to n
   */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i;
	int sum = 0;
	int temp, num;
	int rem;
	printf("Enter the number:\n");
	scanf("%d", &n);
	printf("Armstrong number between 1 to %d are:\n", n);
	for (i = 1; i <= n; i++)
	{
		num = i;
		temp = num;
		sum = 0;
		while (num != 0)
		{
			rem = num % 10;
			sum = sum + (rem * rem * rem);
			sum = 0;
			while (num != 0)
			{
				rem = num % 10;
				sum = sum + (rem * rem * rem);
				num = num / 10;
			}
			if (sum == temp)
			{
				printf("%d\n", sum);
			}
		}
	
