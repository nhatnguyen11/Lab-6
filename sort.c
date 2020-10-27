#include "sort.h"

void selectionSort(int * myArray, int length)
{
      int search, start;
      int temp, min;
      
      for(start = 0; start < length - 1; start++)
      {
         min = start;
         
         for(search = start + 1; search < length; search++)
         {
            if(myArray[search] < myArray[min])              
				      min = search;
         }// end for search
         
         temp = myArray[start];
         myArray[start] = myArray[min];
         myArray[min] = temp;   
      
      }// end for start
}// end method
