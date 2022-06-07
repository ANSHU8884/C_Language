/*
*Write a c program to check wheather given strings are Anagram or not
*/
#include<stdio.h>
void main()
{
	char str1[100], str2[100];
	int i = 0, j;
	int n = 0, k = 0;
	printf("Enter first string\n");
	fgets(str1, sizeof(str1), stdin);
	//get string from user
	printf("Enter second string\n");
	fgets(str2, sizeof(str2), stdin);
	while (str1[i] != '\n')
	{
		n++; //check elements in 1st string
		i++;
	}
	i = 0;
	while (str1[i] != '\n')
	{
		j = 0;
		while (str2[j] != '\n')
		{
			if (str1[i] == str2[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	if (n == k)
	{
		printf("String is anagram");
	}
	else
	{
		printf("String is not anagram");
	}
	getch();
}
