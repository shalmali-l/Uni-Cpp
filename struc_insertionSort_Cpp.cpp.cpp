#include <stdio.h>

struct newStudent{
  int attendance;
  float marks;
}student;

int main() 
{
  struct newStudent student = {29, 29.30 };
  printf("%d, %f", student.attendance, student.marks);
  
  //define array
  int array[] = {4,1,2,3,4,5,6,10,4,6,8,9,0,4,2,2,3,4,6,9};
  int size = sizeof(array)/sizeof(array[0]);
  
  //insertion sort
  for (int i = 0; i < size; i++)
  {
    for (int j = i+1; j < size; j ++)
    {
      if (array[i] > array[j])
      {
        int swap = array[j];
        array[j] = array[i];
        array[i] = swap;
      }
    }
  }
  
  //print array
  for (int i = 0; i < size; i++)
  {
    //printf("array elements Array[%d] = %d \n", i, array[i]);
  }
 
  
}