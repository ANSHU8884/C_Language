/*
*Write a c program which accept two string from user and append second
string after first
*/
#include<stdio.h>
void main()
{
	char str1[100];
	char str2[100];
	int i = 0;
	printf("Enter first string\n");
	fgets(str1, sizeof(str1), stdin);
	//getting string from user
	printf("Enter second string\n");
	fgets(str2, sizeof(str2), stdin);
	printf("\nAppended string is:");
	while (str1[i] != '\n')
	{
		printf("%c", str1[i]);
		i++;
	}
	i = 0;
	while (str2[i] != '\n')
	{
		printf("%c", str2[i]);
		i++;
	}
	getch();
}

