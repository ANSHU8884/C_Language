/*
*write a c program to accept string from user and copy it in another string.
*/
#include<stdio.h>
void main()
{
	char str1[100];
	char str2[100];
	int i = 0;
	printf("Enter a string\n");
	fgets(str1, sizeof(str1), stdin); //to get string from user
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	printf("\nCopied string is:%s", str2);
	getch();
}




