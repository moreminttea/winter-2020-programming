/* Mindy Mohr 917425752
 * average.c
 * ECS36A A04
 * Date: January 23, 2020
 * Input: Integers (until user enters value -1)
 * Output: Average of user inputted integers
 * Algo: this program reads user inputs of integers until the user enters the value of -1; then the program will display the average of the user inputted integers.
 */

#include <stdio.h> //get contents of standard file

//set default values for variables
int num = 0; //counter for number of times user inputs a number
float i, sum = 0;
double average = 0;

int main(void) //main function for converting inches to centimeters; main defaults argument to 0
{
    printf("This program averages a list of integers.\n");
    printf("Enter -1 to signal the end of the list.\n");
    for (num=0; num>=0; num=num+1) //for loop that adds user inputted numbers starting from 0 and until the user inputs -1
    {
        printf("? ");
        scanf("%g", &i); //scans (reads) for user inputted integer values
        if (i==-1) break; //if user enters -1, break out of loop
        sum = sum + i; //keep track of the sum of the values entered
    }
    if (num>0) average = sum/num; //average calculation; if statement prevents undefined average
    printf("The average is %g\n", average); //displays average of user inputted integers
}
