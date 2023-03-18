#include <stdio.h>
#include <stdlib.h>

//This program displays a pattern like a right angle triangle with asterisks

int main(void) 
{
  int i, j, rows;

  printf("Please input the number of rows:\t");
  scanf("%d", &rows);

  for (i = 1; i <= rows; i++)
    {
      for (j = 1; j <= i; j++)
        printf("*");
      printf("\n");
    }

  
printf("\nEnd of program\n\n");
  sleep (5);
  system("clear");
  printf("Welcome user,");
  
  return 0;
}