/* Mindy Mohr 917425752
* fibonacci.c
* ECS36A A04 - Hamann
* Date: March 13, 2020
* Input: user input n
* Output: nth number in Fibonacci sequence
* Algo: calculates the nth number in the Fibonacci sequence using the recursive formula: f(n) = f(n-1) + f(n-2) with f(0) = 0, f(1) = 1
*/

#include <stdio.h> //get contents of standard file

int n = 0; //user input for nth value in Fibonacci sequence
int fn = 0; //value of Fibonacci nth term

int fibonacci_recursion_formula(int n) //function for calculating value of Fibonacci nth term using recursive formula
{
    if (n==0)
    {
        return 0; //f(0) = 0
    }
    if (n==1)
    {
        return 1; //f(1) = 1
    }
    else
    {
        return fibonacci_recursion_formula(n-1) + fibonacci_recursion_formula(n-2); //f(n) = f(n-1) + f(n-2)
    }
}

int main(void) //main function for printing value of Fibonacci nth term
{
    printf("This program computes the n-th Fibonacci number\nusing the recursive formula.\n");
    printf("Please enter n: ");
    scanf("%i", &n); //reads (scans) user input for nth value
    
    fn = fibonacci_recursion_formula(n); //calculates nth term of sequence by calling recursion formula function
    printf("Fib(%i) = %i\n", n, fn);
}
