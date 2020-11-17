#include <iostream>
#include<vector>
using namespace std;

vector <string> calculation(vector<int>response, vector<int>answers, vector<string>output);


int main()
{
  int input;
  
  int arr[] = {5,97,45,7,8,42,3,74,6,16,2,29};

  vector<int>answers(arr, arr+12);

  vector<int>response;

  vector<string>output;

  output.push_back("Green");
  output.push_back("Orange");
  output.push_back("Light Green");

  output.push_back("Medium Green");
  output.push_back("Maroon");
  output.push_back("Pink");

  output.push_back("Olive Green");
  output.push_back("Dark Green");
  output.push_back("Light Red");

  output.push_back("Blueish Green");
  output.push_back("Pale Red");
  output.push_back("Light Pink");

  cout << " Welcome to the color blindness test\n";
  cout << " By the end of this test we will have an idea of what type of color blindness you might have\n";

  for(int i = 0; i < 12; i++)
  {
    cout << "What number do you see in picture " << i + 1 << " ?"<< "(Enter 99 if no number is visible)";
    cin >>input;
    response.push_back(input);
  }

  vector<string>colors = calculation(response, answers, output); 
  
  for(int k = 0; k < colors.size(); k++)
  {
    cout << "You have trouble seeing the color: " << colors[k] << endl;
  }
  return 0;
}

vector <string> calculation(vector<int>response, vector<int>answers, vector<string>output )
{
  vector<string>colors;

  for(int j = 0; j < 12; j++)
  {
    if (answers[j] != response[j])
    {
      string valuetoreturn = output[j];
      colors.push_back(valuetoreturn);
    }
  }
  return colors;
}
