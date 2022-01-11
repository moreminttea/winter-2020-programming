/* Mindy Mohr 917425752
 * insrtsort.c
 * ECS36A A04 - Hamann
 * Date: March 9, 2020
 * Input: user input list of integers
 * Output: input array and sorted array
 * Algo: the user inputs a list of integers that are stored into an array, which is then sorted into acscending order.
 */

#include <stdio.h> //get contents of standard file
#include <stdlib.h> //get contents of standard library
#include <string.h> //get contents of string library
#define true 1 //for determining when user wants to end list of integers

int i = 0; //integer for printing in main and original variable for swapping
int right_element, temp_placeholder = 0; //integers for swapping
int size = 0; //array size
int array[100];
int num = 0; //int num_list
char num_list[100]; //str num


int main(void) //main function: asking for user input, printing input array and sorted array
{
    //Asking for user's integer list --------------
    printf("Enter a list of integers\n");
    for (size=0; size<=100; size=size+1) //for loop that continues to prompt for user input integers
    {
        printf("> ");
        fgets(num_list, sizeof(num_list), stdin); //points to array and only copies up to size of array using file of standard input
        num = sscanf(num_list, "%d", &num); //points to and reads string (num_list) and stores integers into num_list and returns as an integer
        
        if (num != 1) //if user hits enter w/o typing an integer, break out of loop since empty string is not an integer (fulfills condition "not True")
        {
            break;
        }
        array[size] = atoi(num_list); //converts array (a string) to integer
    }
    
    //Printing Input Array -----------------------
    printf("The input array is: ");
    for (i=0; i<size; i=i+1) //to print, elements have to stay between 0 and array size
    {
        if (i+(i-1)<=size) //prints all elements of array except for last element
        {
            printf("%d, ", array[i]);
        }
        if (i+(i-2)>=size) //prints last element of array w/o comma
        {
            printf("%d\n", array[i]);
        }
    }
    
    //Sorting Array ------------------------------
    for (i=0; i<size; i=i+1) //for loop that checks position of subarrays consisting of element i and element to right of i; position has to be between 0 and array size
    {
        for (right_element=i+1; right_element<size; right_element=right_element+1) //position of right_element is next to and on the right of element i
        {
            if (array[i] > array[right_element]) //if position of integer i is > integer right_element when i should be smaller, swap
            {
                temp_placeholder = array[i]; //assign placeholder value of integer i
                array[i] = array[right_element]; //assign integer i the value of integer right_element (so that integer i will be the smaller integer)
                array[right_element] = temp_placeholder; //assign integer of right_element the value of integer i through the placeholder (so integer of right_element will be bigger)
            }
        }
    }
    
    //Printing Sorted Array ----------------------
    printf("The sorted array is: ");
    for (i=0; i<size; i=i+1) //to print, elements have to stay between 0 and array size
    {
        if (i+(i-1)<=size) //prints all elements of array except for last element
        {
            printf("%d, ", array[i]);
        }
        if (i+(i-2)>=size) //prints last element of array w/o comma
        {
            printf("%d\n", array[i]);
        }
    }
}
