#include<iostream>  
#include <string>
using namespace std;

class Base{
  // Access specifier 
  public: 
  int student;
  
  void printIt()
  {
    printf("Hello \n");
  }
}base1;

class derived: public Base{
  public:
  int marks;
  int student;
 
  void printIt()
  {
    printf("Hello derived ..\n");
  }

}derived1;



int main()   
{   
  Base bas = Base();
  bas.printIt();
  derived dev = derived();
  dev.printIt();
  Base bas2 = derived();
  bas2.printIt();
  /*
  derived dev2 = Base();
  dev2.printIt();
  */
}    