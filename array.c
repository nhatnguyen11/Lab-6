#include "array.h"
extern const int MAX;

/**
 * The fillArray method fills fills the array by 
 * asking the user to enter an integer.
 *
 * @param myArray Representing the array of integers
 * @param num Representing the number of elements in the array
 */
void fillArray(int * myArray, int num)
{
  for (int i=0; i< MAX; i++)
  {
    myArray[i] = rand() % (num - 1 + 1) + 1;
  }

}// end method


/**
 * The deleteSingleValue method first prompts the user to enter a value that should be deleted.<br>
 * Next the method searches through the array to determine if that value was in the array.<br>
 * If the value is not in the array, a message "Value NOT found" is displayed and current number of actual elements is returned.<br>
 * If the value is found it is removed from the array by shifting all elements to the right of the number being deleted left <br>
 * Once the shift has happened a zero is placed in the last index<br>
 *
 * @param myArray Representing the array of integers
 * @param length Representing the actual number of elements in the array
 * @return int Representing the new actual number of elements in the array
 */
int deleteSingleValue(int * myArray, int length)
{
  int a=-1;
  printf("Choose a value to delete: ");
  scanf("%d", &a);
 
    for (int i = 0; i < length; i++)
  {
    if (a == myArray[i])
    {
      for(int j = i; j < length - 1; j++)
      {
        myArray[j] = myArray[j+1]; 
      }
      myArray[length-1]= 0;
      return length - 1;

    }  
  }
  printf("Value not found \n");
  return length;
}
// end method



/**
 * The printArray method prints the array in the following fashion<br>
 * [value, value, value, ..., value]
 *
 * @param myArray Representing the array of integers to be printed
 * @param length Representing the actual number of elements in the array
 */
void printArray(int * myArray, int length)
{
  printf("Array: \n");

  printf("[");
  for (int i=0; i< length; i++)
  {
    printf("%d, ", myArray[i]);
  
	
    
  }
  printf("] \n");
  

}// end printArray

