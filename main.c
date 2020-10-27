#include <stdio.h>
#include <stdlib.h>
#include "lab6.h"
#include "stats.h"
#include "array.h"

const int MAX = 25;

int main()
{
	int num, choice;
  int myArray[MAX], actual;
  double mean, median, midpoint, stdDev;

  num = readNum();  // lab6.c
  fillArray(myArray, num); // array.c
  actual = MAX;

   	do
   	{
		  choice = menu(); // lab6.c
      

      	switch(choice)
      	{
         	case 1: printArray(myArray, actual); // array.c [ #, #, # ]
					        break;
					
			    case 2: actual = deleteSingleValue(myArray, actual); // array.c. 
                  break;                     //[ 10, 20, 30, 40]
                                             // [10, 30, 40], 0] 

			    case 3: mean = computeMean(myArray, actual); // stats.c
                	printResults("Mean", mean); // stats.c
                 	break;

         	case 4: median = computeMedian(myArray, actual); // stats.c
                  printResults("Median", median); // stats.c
                  break;

			    case 5: midpoint = computeMidpoint(myArray, actual); // stats.c
                  printResults("Midpoint", midpoint); // stats.c
                  break;

         	case 6: stdDev = computeStdDev(myArray, actual); // stats.c
                  printResults("Standard Deviation", stdDev); // stats.c
                  break;

			    default:printf("All Done\n");

		}// end switch

	}while(choice != 7);
	
	printf("Good Bye\n");
	
	return 0;
}// end main

