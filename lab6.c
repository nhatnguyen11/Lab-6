#include "lab6.h"

extern const int MAX;

int readNum()
{
	int num=-1;

   while (num < 100)
   {
     printf("Enter a a number that is 100 or greater ");
     scanf("%d", &num);
     if (num < 100)
     {
       printf("Invalid\n");
     }
    }
   
	
	return num;     
}// end method

int menu()
{
  int choice = 0;
  do
  {
    printf("The menu choices are\n");
    printf("1. Print the array\n");
    printf("2. Delete Single Value\n");
    printf("3. Find the Mean\n");
    printf("4. Find the Median\n");
    printf("5. Find the Midpoint\n");
    printf("6. Find the Standard Deviation\n");
    printf("7. Quit the program\n");
    printf("Choose: ");
    scanf("%d", &choice);

    if (choice == '7')
    {
      printf("Good Bye\n");
    }
    if (choice < 1 || choice >7)
    {
      printf("Invalid choice \n");
    }

    

  

    
    
  }while (choice < 1 || choice > 7);
  

  return choice;
}// end method






