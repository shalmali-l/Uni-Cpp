// C++ program to sort a string of characters 
#include<bits/stdc++.h> 
using namespace std; 
  
// function to print string in sorted order 
void sortString(string &str) 
{ 
   sort(str.begin(), str.end()); 
   cout << str; 
} 

//Publish all vowels in the given string
/* input = String
*  returns printed vowels
*/
void vowelsPublish(string &str)
{
  int length = str.length();
  printf("%d", length);
  string temp = "";

  for(int i = 0; i < length; i++){
    if(str[i]=='a'||str[i]== 'e'||str[i]=='i'||str[i]== 'o'||str[i]=='u'){
      temp += (str[i]);
    }
    else{
      cout << temp << "  ";
      temp = "";
      
    }
  }
  cout << temp;

}
  
int main() 
{ 
    string s = "abcdeeeffgghiouplicaeio";  
    sortString(s);  
    vowelsPublish(s);
    return 0; 
} 