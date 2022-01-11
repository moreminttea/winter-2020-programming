/* Mindy Mohr 917425752
 * divisibles.c
 * ECS36A A04 - Hamann
 * Date: February 5, 2020
 * Input: N/A
 * Output: Integers from 1-100 that are divisible by either 6 or 7.
 * Algo: this program displays the integers from 1-100 that are divisible by either integers 6 or 7.
 */

#include <stdio.h> //get contents of standard file

int i = 0; //set default value for integers as int

int main(void) //main function for printing integers that are divisible by 6 or 7; main defaults argument to 0
{
    for (i=1; i<=100; i=i+1) //for loop that starts from 1 to 100, adding one through each iteration
    {
        if ((i%6)==0 && i!=42 && i!=84) printf("%4d\n", i); //if the integer is divisible by 6 (except for 42 and 84 to prevent from being printed more than once) and has a remainder of 0 then print the integer
        if ((i%7)==0 && i!=42 && i!=84) printf("%4d\n", i); //if the integer is divisible by 7 (except for 42 and 84 to prevent from being printed more than once) and has a remainder of 0 then print the integer
        if (((i%6)==0) && ((i%7)==0)) printf("%4d\n", i); //prevents 42 from being printed twice; prints "42" once
    }
}
