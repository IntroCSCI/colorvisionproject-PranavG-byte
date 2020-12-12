#include "ColorBlindnessTest.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
  cout << "\n";
  cout << " Welcome to the color blindness test\n";
  cout << "\n";
  cout << " By the end of this test we will have an idea of what type of color blindness you might have";
  cout << "\n";

  ColorBlindnessTest ColorBlindnessTestobject;
  
  ColorBlindnessTestobject.getuserresponse();

  ColorBlindnessTestobject.determinecolorblindness(); 
  
  ColorBlindnessTestobject.printresults();
}