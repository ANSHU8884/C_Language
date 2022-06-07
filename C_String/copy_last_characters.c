/*
*Write a c progam accept string from user and copy last characters in other string.
*/
#include<stdio.h>
void main() {
	char str[100], str2[100];
	int i = 0, j = 1;
	int n;
	printf("enter a string : ");
	fgets(str, sizeof(str), stdin);
	printf("enter a number to copy string : ");
	scanf_s("%d", &n);
	while (str[i] != '\n' && str[i] != '\0')
	{
		i++;
	}
	while (j <= n)
	{
		if (str[i] == ' ')
		{
			i--;
		}
		i--;
		j++;
	}
	j = 0;
	while (str[i] != '\n')
	{
		str2[j] = str[i];
		j++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%c", str2[i]);
		i++;
	}
	getch();
}
