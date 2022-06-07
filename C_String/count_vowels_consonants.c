/*
*Write a c progam to count count of number of vowels and consonents in the given string.
*/
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	int vowel = 0, cons = 0;
	printf("Enter a string\n");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			switch (str[i])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel++;
				break;
			default:
				cons++;
			}
		}
	}
	printf("V are:%d", vowel);
	printf("\nC are:%d", cons);
	getch();
}
