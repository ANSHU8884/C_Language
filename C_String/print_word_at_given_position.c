
/*
*Write a c progam to accept string from user and position from user and print word at that position.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0, count = 1, j;
	printf("enter a string : ");
	fgets(str, sizeof(str), stdin);
	printf("enter a position : ");
	scanf_s("%d", &j);
	while (str[i] != '\n')
	{
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		while (str[i] != ' ' && str[i] != '\n')
		{
			if (count == j)
			{
				printf("%c", str[i]);
			}
			i++;
		}
		count++;
	}
	getch();
}

