/*Write a c progam to accept string with multiple spaces from user and print it with single space as
delimeter.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0;
	printf("Enter a string:");
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
		}
		while (str[i] == ' ')
		{
			printf("%c", str[i]);
			break;
		}
	}
	getch();
}

