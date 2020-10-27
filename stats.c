#include "stats.h"
#include "sort.h"
#include <math.h>
extern const int MAX;

double computeMean(int * myArray, int length)
{
  double mean = 0;
  for (int i = 0; i < length; i++)
  {
    mean = mean + myArray[i];
  }
  mean = mean/length ;
	return mean;
      
}// end method


void printResults(char * type, double result)
{
	printf("the results for %s are %lf\n", type, result);
}


double computeMedian(int * myArray, int length)
{
	selectionSort(myArray, length);
	double median;
  if (length % 2 == 1)
  {
    median = myArray[length /2];

  }
  else 
  {
    double even1 = myArray[length/2];
    double even2 = myArray[(length/2)-1];
    median =  (even1 + even2)/2;
  }

    return median;
}


double computeMidpoint(int * myArray, int length)
{
  selectionSort(myArray, length);
  double midpoint = (myArray[0] + myArray[length-1])/2;
  

  
    return midpoint;
}
   

double computeStdDev(int * myArray, int length)
{
	double temp[MAX];
	double theMean = computeMean(myArray, length);
  double sum=0;
  for (int i; i< length; i++)
  {
    temp[i] = myArray[i] - theMean;
  }
  for ( int i=0; i< length; i++)
  {
    sum = sum + (temp[i] * temp[i]); 
  }
  double k = sum / (length-1);
  double stdDev= sqrt(k);
	return stdDev;
}

