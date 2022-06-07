/*
*Write a c program which accept two string from user and compare two strings
*/
#include<stdio.h>
void main()
{
	char str1[100], str2[100];
	int i = 0;
	int count1 = 0, count2 = 0;
	printf("Enter first string\n");
	fgets(str1, sizeof(str1), stdin);
	//get string from user
	printf("Enter second string\n");
	fgets(str2, sizeof(str2), stdin);
	while (str1[i] != '\0')
	{
		count1++;
		i++;
	}
	while (str2[i] != '\0')
	{
		count2++;
		i++;
	}
	if (str1[i] == str2[i]) //condition to check strings are equal or not
	{
		printf("Both string are equal\n");
	}
	else
	{
		printf("String are not equal\n");
	}
	getch();
}

