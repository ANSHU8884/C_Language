/*
*Write a c progam to accept string with multiple spaces from user and print as it is.
*/
#include<stdio.h>
void main()
{
	char str[10];
	printf("Enter a string:\n");
	fgets(str, sizeof(str), stdin);
	printf("%s", str);
	getch();
}
