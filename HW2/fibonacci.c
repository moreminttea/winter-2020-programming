/* Mindy Mohr 917425752
 * fibonacci.c
 * ECS36A A04 - Hamann
 * Date: February 5, 2020
 * Input: N/A
 * Output: Fibonacci sequence from F(0) to F(15)
 * Algo: this program lists the Fibonacci sequence from F(0) to F(15).
 */

#include <stdio.h> //get contents of standard file

int i = 0; //keep track of integers
int f0 = 0; //first integer added in sequence (default)
int f1 = 1; //second integer added in sequence (default)
int output = 0; //first and second integer sum (changes with each iteration)

int main(void) //main function for printing out Fibonacci's sequence from 0 to 15; main defaults argument to 0
{
    printf("This program lists the Fibonacci sequence.\n");
    printf(" F(%d) = %4d\n", f0, f0); //prints F(0) = 0
    printf(" F(%d) = %4d\n", f1, f1); //prints F(1) = 1
    for (i=2; i<=15; i=i+1) //for loop that starts the sequence from 2 to 15
    {
        output = f0 + f1; //calculates sum of the previous two integers
        if (i<10) printf(" F(%d) = %4d\n", i, output); //prints F(integer) = sum; formatted to right-align
        if (i>=10 && i<=15) printf("F(%d) = %4d\n", i, output); //prints F(integer) = sum; formatted to right-align
        f0 = f1; //first integer is now the "second" integer for the next iteration
        f1 = output; //second integer is now the sum of the integers from the previous iteration
    }
}
