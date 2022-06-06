/*
*write c program to print sum of  natural numbers from 1 to 100
*/

//solution

#include<stdio.h>
void main()
{
    int i;      //variable definition
    int sum = 0;         //variable initialization

    for (i = 1; i <= 100; i++)  // in for loop we have to initialize i then increment i
    {

        sum = sum + i;    //addition 


    }                                                            //end for
    printf("sum of Natural no between 1 to 100 is=%d", sum);
}                                                              //end main


