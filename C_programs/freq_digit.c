/* write a c program to find frequency of each digit in a given integer
   */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, rem1, rem2, count;
	int temp1, temp2;
	printf("Enter the number:");
	scanf("%d", &n);
	temp1 = n;

	while (temp1 > 0)
	{
		count = 0;
		rem1 = temp1 % 10;
		temp2 = n;
		while (temp2 > 0)
		{
			rem2 = temp2 % 10;
			if (rem1 == rem2) 
			{
				count++;
			}
			temp2 = temp2 / 10;
		}
		printf("%d%d", rem1, count);
		temp1 = temp1 / 10;
	}
	getch();


}
