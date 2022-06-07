/*
*Write a c progam to accept string from user and print number of white spaces in string.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	int count = 0;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin); //get string from user
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] == ' ') //to print space number
		{
			count++;
		}
	}
	printf("Number of white spaces:%d", count);
	getch();
}


