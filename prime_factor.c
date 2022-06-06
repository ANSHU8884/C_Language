29]
/*
*c program to print prime factor of a number

*/
//solution
#include<stdio.h>
void main()
{
	int i, j, n, prime;     //variable definition
	printf("enter any number to print prime factor:");   //read user value
	scanf_s("%d", &n);
	printf("all prime factors of %d are:\n", n); //print
	for (i = 2; i <= n; i++)          //find all prime factors, i=2 because prime no starts from 2 
	{
		if (n % i == 0)          //check i for factor of n
		{
			prime = 1;           //check i for prime
			for (j = 2; j <= i / 2; j++)    //j=i/2 because any factor of no is always less than n/2
			{
				if (i % j == 0)    //
				{
					prime = 0;
					break;
				}
			}
			if (prime == 1)
			{
				printf("%d\n", i);
			}

		}

	}

}
