/*
*Write a c progam accept string from user and check wheather string is pallindrome or not.
*/
#include<stdio.h>
void main()
{
	char str1[100];
	char str2[100];
	int i, flag;
	int j, n;
	printf("Enter a string:\n");
	fgets(str1, sizeof(str1), stdin);
	for (i = 0; str1[i] != '\n'; i++)
	{
	}
	n = 0;
	for (j = i - 1; j >= 0; j--)
	{
		str2[n] = str1[j];
		n++;
	}
	str2[n] = '\n';
	
		for (i = 0; str2[i] != '\n'; i++)
		{
			flag = 0;
			if (str2[i] == str1[i])
			{
				flag = 1;
			}
		}
	if (flag)
	{
		printf("String is pallindrome");
	}
	else
	{
		printf("String is not pallindrome");
	}
	getch();
}
