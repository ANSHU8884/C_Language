/*
*Write a c progam accept string from user and reverse word which are of even length.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0, j;
	int count, n;
	printf("enter a string : ");
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\n')
	{
		count = 0;
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		n = i;
		while (str[n] != ' ' && str[n] != '\n')
		{
			count++;
			n++;
		}
		if (count % 2 == 0)
		{
			for (j = n - 1; str[j] != ' ' && j >= 0; j--)
			{
				printf("%c", str[j]);
			}
			i = n;
			while (str[i] == ' ')
			{
				if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
				{
					printf(" ");
				}
				i++;
			}
		}
		else
		{
			while (str[i] != ' ' && str[i] != '\n')
			{
				printf("%c", str[i]);
				i++;
			}
			while (str[i] == ' ')
			{
				if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
				{
					printf(" ");
				}
				i++;
			}
		}
	}
	getch();
}


