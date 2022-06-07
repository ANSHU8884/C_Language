/* 
* Write a c progam to print count of number characters in given string.
* /
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0;
	int count = 0;
	printf("Enter a string");
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\n')
		{
			printf("%c", str[i]);
			i++;
			count++;
		}
		while (str[i] == ' ')
		{
			printf("%c", str[i]);
			break;
		}
	}
	printf("\nNumber of character are:%d", count);
	getch();
}

