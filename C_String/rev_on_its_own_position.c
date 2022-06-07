/*
*Write a c progam to reverse a string ,words reverse on its own position.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0, j;
	printf("enter a string : ");
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
			while (str[i] != ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
			{
				i++;
			}
		for (j = i; j >= 0 && str[j] != ' '; j--)
		{
			printf("%c", str[j]);
		}
		i++;
		while (str[i] == ' ')
		{
			if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
			{
				printf(" ");
			}
			i++;
		}
	}
	getch();
}
