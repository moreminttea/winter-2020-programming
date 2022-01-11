/* Mindy Mohr 917425752
 * indexarray.c
 * ECS36A A04 - Hamann
 * Date: March 9, 2020
 * Input: user inputted array size
 * Output: returns a pointer to allocated integer array w/ n elements
 * Algo: creates a dynamically allocated integer array w/ n elements and returns a pointer to print the array.
 */

#include <stdio.h> //get contents of standard file
#include <stdlib.h> //get contents of standard library

int i = 0; //keep track of integers
int size = 0; //intialized size of array
int array[] = {}; //intialized array

int IndexArray(int n) //function that creates a dynamically allocated integer array w/ n elements
{
    printf("Please enter the size of the array: ");
    scanf("%d", &size); //scans (reads) user input for array size as int type
    
    array[size] = *((((int*) malloc (size * sizeof(int))))); //dynamic memory allocation; accesses and adjusts size of memory by converting array to a pointer
    
    for(i=0; i<=size; i = i+1) //for loop that adds integers of n-1 elements into an array
    {
        if (i+1<size) //all elements up to n-1 elements are added to array
        {
            array[i] = i+1;
        }
        if (i+1 == size) //if nth element is equal to size, exit for loop
        {
            break;
        }
    }
    return array[size]; //returns array as pointer
}

int main(void) //main function for printing the resulting array using the IndexArray function
{
    array[size] = IndexArray(size); //calls IndexArray function
    
    printf("The resulting array is:\n");
    printf("%d, ", array[i]); //prints first two elements of array
    printf("%d, ", array[i]+1);
    for(i=1; i+2<size; i=i+1) //for loop that prints out array (from i to n-2 elements)
    {
        printf("%d, ", array[i]);
    }
    printf("%d\n", size-1); //prints last element of array (w/o comma)
}
