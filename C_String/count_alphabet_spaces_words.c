/*
*write a c program to count number of alphabets,spaces and words in given string
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	int alphabet = 0;
	int space = 0, word = 1;
	printf("Enter a string:\n");
	fgets(str, sizeof(str), stdin); //to get string from user
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') //to print no. of 
			alphabet
		{
		alphabet++;
		}
			if (str[i] == ' ') //to print space number
			{
				space++;
			}
		if (str[i] == ' ' && str[i] != '\n') //to print no. of words
		{
			word++;
		}
	}
	printf("Number of alphabet are:%d", alphabet);
	printf("\nNumber of spaces are:%d", space);
	printf("\nNumber of words are:%d", word);
	getch();
}
