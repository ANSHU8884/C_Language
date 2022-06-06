/*
*write c program to print sum of odd natural numbers from 1 to 100
*/

//solution
#include<stdio.h>
void main()
{
    int i;                         //variable definition
    int sum = 0;          //variable initialization
    printf("Sum of odd natural numbers from 1 to 100 is:");

    i = 1;           //initialization
    while (i <= 100)            //condition
    {
        if (i % 2 != 0)       //condition to check no is odd
        {
            sum = sum + i;   //addition
        }                   //end if  
        i++;               // addition
    }                     //end while
    printf("%d", sum);
}                      //end main
