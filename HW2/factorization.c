/* Mindy Mohr 917425752
 * factorization.c
 * ECS36A A04 - Hamann
 * Date: February 5, 2020
 * Input: User inputted number to be factorized
 * Output: Factors of user inputted number
 * Algo: this program prints out the factors of the user inputted number.
 */

#include <stdio.h> //get contents of standard file

int number = 0; //number that is inputted by user set as integer type
int i = 2; //keep track of prime factors (with 2 being the first prime integer)

int main(void) //main function for factorizing user's input value; main defaults argument to 0
{
    printf("Enter number to be factored:");
    scanf("%i", &number); //scans (reads) user input for number to be factored
    
    for (i = 2; number >= i; i = i+1) //for loop that starts the sequence from 2 (the first prime number) to the number inputted
    {
        while (number%i == 0) //if the number is divisible by i and has a remainder of 0, it is a factor
        {
            if (number/i != 1) //if the number is divisible by i and i is not the number itself (hence != 1), print factor with * sign
            {
                printf(" %i *", i);
            }
            if (number/i == 1) //if the number is divisible by i and i is the number itself (hence == 1), print factor without * sign
            {
                printf(" %i\n", i);
            }
            number = number/i; //after each loop, divide the number by the factor already taken out
        }
    }
}
