#include <stdio.h>
//pre and post incrementing of integer

int main()
{
  int i = 10;
  int j = 20;
  
  //current values
  printf("initial Values : i = %d, j = %d\n", i, j);
  //preincrement and decrement
  printf("%d, %d \n", i++, j++);
  printf("%d, %d\n", i--, j--);
  
  //current values
  printf("initial Values : i = %d, j = %d\n", i, j);
  
  //postincrement and decrement
  printf("%d, %d\n", ++i, ++j);
  printf("%d, %d\n", --i, --j);
  
  
}