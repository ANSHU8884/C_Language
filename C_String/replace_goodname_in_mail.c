/*
*Write a c progam to replace Goodname in mail.
*/
#include<stdio.h>
void main()
{
	char str[100] = "Hello Goodname";
	int i;
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] == ' ')
			break;
	}
	printf("Enter a string\n");
	fgets(str + i + 1, sizeof(str), stdin);
	for (i = 0; str[i] != '\n'; i++)
	{
		printf("%c", str[i]);
	}
	getch();
}


