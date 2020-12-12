#include "ColorBlindnessTest.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

// Member function implementations...
void ColorBlindnessTest::getuserresponse() 
{
  string filename;
  cout << " Enter the name of the input file : ";
  cin >> filename;
  ifstream fin(filename);
  if(fin.fail())
  {
    cout <<"Error : File name not found!";
  }
  for(int i = 0; i < answers.size(); i++)
  {
    int input;
    fin >>input;
    response.push_back(input);
  }  
}

vector <string> ColorBlindnessTest::determinecolorblindness()
{
  
  for(int j = 0; j < response.size(); j++)
  {
    if (answers[j] != response[j])
    {      
      colors.push_back(colornames[j]);
    }
  }
  return colors;
}

void ColorBlindnessTest::printresults()
{
  
  ofstream fout("output.txt");
  if (colors.size() > 0)
  {
    if(!fout.fail())
    { 
      fout << "-----------------------------------------------" << endl;
      fout << "              Assessment Results" << endl;
      fout << "-----------------------------------------------"<< endl;
      fout << "You have trouble seeing the folowing colors: \n" << endl;

      for(int k = 0; k < colors.size(); k++)
      {
        if(k < 9)
        {
          fout << " " << k + 1 << ".  " << colors[k] << endl;
        }
        else
        {
          fout << k + 1 << ".  " << colors[k] << endl;
        }
      }
    }
  }
  else
  {
    fout << "-----------------------------------------------" << endl;
    fout << "              Assessment Results" << endl;
    fout << "-----------------------------------------------"<< endl;
    fout << "You have trouble seeing the folowing colors: \n" << endl;
    fout << "You don't have colorblindness";
  }
    
}