/*
*Write a c progam to replace space with "$" in given string.
*/
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i = 0;
	printf("Enter a string");
	fgets(str, sizeof(str), stdin); //to get input string
	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\n') //to get single spaes and print string
		{
			printf("%c", str[i]);
			i++;
		}
		while (str[i + 1] == ' ')
		{
			i++;
		}
		if (str[i + 1] != '\n')
		{
			printf("$");
		}
		i++;
	}
	getch();
}



