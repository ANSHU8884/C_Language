/*
*Write a c progam to accept string from user and print number of words of even and odd.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0, count;
	int even = 0;
	int odd = 0;
	printf("enter a string :");
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\n')
	{
		count = 0;
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		while (str[i] != ' ' && str[i] != '\n')
		{
				count++;
			i++;
		}
		if (count % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\nEven : %d", even);
	printf("\nOdd : %d", odd);
	getch();
}
