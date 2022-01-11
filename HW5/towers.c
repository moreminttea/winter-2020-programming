/* Mindy Mohr 917425752
* towers.c
* ECS36A A04 - Hamann
* Date: March 13, 2020
* Input: user input n
* Output: individual steps to complete Towers of Hanoi puzzle
* Algo: prints the individual steps of completing the Towers of Hanoi for user input n number of disks using the recursive formula: h(n) = 2h(n-1) + 1 with h(1) = 1
*/

#include <stdio.h> //get contents of standard file

int n = 0; //user input for n disks

int towers_recursion(int n, char left, char middle, char right) //function for calculating the individual steps to complete the Towers of Hanoi puzzle for n disks
{
    if (n==1) //"h(1) = 1" for n = 1 part of recursive formula
    {
        printf("%c -> %c", left, middle); //"moves" the 1 disk from left tower to right tower (last step for any n disks)
        return 0;
    }
    else
    {
        //"2h(n-1) + 1" for n > 1 part of the recursive formula
        towers_recursion(n-1, left, right, middle); //switches middle and right arguments; calls recursive function that "moves" smallest top disk to the empty tower
        printf("\n%c -> %c\n", left, middle); //prints from left to right (previously middle in original function argument) tower
        towers_recursion(n-1, right, middle, left); //switches left -> right, right -> middle, middle -> left; calls recursive function that "moves" next disk to other empty tower
        return 0;
    }
}

int main(void) //main function for getting user input and calling towers function
{
    printf("Please enter n: \n");
    scanf("%i", &n); //reads (scans) user input for n disks
    
    towers_recursion(n, 'A', 'B', 'C'); //calls recursive function to print out individual steps for towers A, B, and C
    
    printf("\n"); //print new line for formatting purposes
}
