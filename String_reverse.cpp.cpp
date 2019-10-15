#include<iostream>  
#include <string>
using namespace std;


int main()   
{   
 string givenstring = "given";
 char* s = &givenstring[0];
 int len = givenstring.length();
  
 //reverse the string
 for (int i = len; i >=0; i--)
 {
  cout << givenstring[i];
   
 }
 //OR
 reverse(givenstring.begin(), givenstring.end())
  
}    