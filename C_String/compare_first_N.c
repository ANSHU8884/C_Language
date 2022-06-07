/*
*Write a c progam accept two string from user and compare only first N characters of two string.If
both strings are
equal till N character then return 0 otherwise return differencre between first mismatch character.
*/
#include<stdio.h>
void main() {
	char str1[100];
	char str2[100];
	int i;
	int n, flag, diff;
	printf("Enter first string:");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter second string:");
	fgets(str2, sizeof(str2), stdin);
	printf("Enter a number:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		flag = 0;
		if (str1[i] == str2[i])
		{
			flag = 1;
		}
		else
		{
			if (str1[i] > str2[i])
			{
			diff = str1[i] - str2[i];
			}
			else
			{
				diff = str2[i] - str1[i];
			}
			break;
		}
	}
	if (flag)
	{
		printf("Both strings are equal");
	}
	else
	{
		printf("Strings not equal\n");
		printf("diff is %d", diff);
	}
	getch();
}
