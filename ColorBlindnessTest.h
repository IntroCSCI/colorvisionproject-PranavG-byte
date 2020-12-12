#ifndef ColorBlindnessTest_H
#define ColorBlindnessTest_H
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

class ColorBlindnessTest{
  private:
    vector<int>answers;

    vector<int>response;

    vector<string>colors;

    vector<string>colornames;

  public:
    ColorBlindnessTest()
    {
      answers = vector<int> {5,97,45,7,8,42,3,74,6,16,2,29};
      colornames = vector<string> {"Green", "Orange", "Light Green", "Medium Green", "Maroon", "Pink", "Olive Green", "Dark Green", "Light Red", "Blueish Green", "Pale Red", "Light Pink"};
    }
    void getuserresponse();
    vector <string> determinecolorblindness();
    void printresults();
};

#endif