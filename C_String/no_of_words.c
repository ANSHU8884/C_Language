/*
*Write a c program which accept string from user and print number
of words from that string
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i = 0;
	int num = 1;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin); //to get string from user
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i] != '\n') //condition to count no. of words
		{
			num++;
		}
	}
	printf("Number of words:%d", num);
	getch();
}
