#include <stdio.h>
#include <iostream>
#include <string>
//function declaration
void arrayfunc(int array[5]);
//function to fill array
void arrayFill(int arr[3][3]);
void print2Darray(int arr[3][3]);
using namespace std;

int main()
{
  int array1[5] = {2,3,4,5,6};
  //2D array
  int test[3][3];  
  
  //traversing array    
  for (int i: array1)     
  {    
    printf("%d \t",i);
  }  
  arrayfunc(array1);
  arrayFill(test);
  print2Darray(test);
}

void arrayfunc(int array[5])
{
    //reverse an array
  for (int i = 4; i >= 0; i--)
  {
    cout << array[i] << endl;
  }
  
}
void arrayFill(int arr[3][3]){
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
        arr[i][j] = (i*j);
         cout<< (i*j)<< endl;  
      }
   }
}

void print2Darray(int arr[3][3])
{
  for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< arr[i][j]<<" ";  
        }  
  }
}