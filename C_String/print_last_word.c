
/*
*Write a c program which accept string from user and print last word of string
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0;
	int count = 0, j;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\n')
	{
		count++;
		i++;
	}
	j = count;
	while (str[j] != ' ')
	{
		j--;
	}
	printf("Last element is:\n");
	for (i = j + 1; i <= count; i++)
	{
		printf("%c", str[i]);
	}
	getch();
}


