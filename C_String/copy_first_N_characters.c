/*
*Write a c progam accept string from user and copy first N characters in some destination string.
*/
#include<stdio.h>
void main()
{
	char str1[100], str2[100];
	int i = 0;
	int j = 0, n;
	printf("enter a string : ");
	fgets(str1, sizeof(str1), stdin);
	printf("enter a number to copy string : ");
	scanf_s("%d", &n);
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	while (j < n)
	{
		printf("%c", str2[j]);
		j++;
	}
	getch();
}

