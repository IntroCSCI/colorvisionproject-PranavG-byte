#include <iostream>

using namespace std;

int main()
{
 
  char decision;
  int image1, image2, image3, image4, image5, image6;
  int image7, image8, image9, image10, image11, image12;
  double score = 0;
  double finalvalue;
  
  do
  {
    cout << " Welcome to the color blindness test\n";
    cout << " By the end of this test we will have an idea of what type of color blindness\n";
    cout << " you have if any\n";

    cout << " Ready to begin? (y/n) \n ";
    cin  >> decision; 
    
    
    cout << " To begin the Color blindness test click your cursor on the\n";
    cout << " Images folder and click on Image 1\n";

    cout << " What number do you see on image A?\n";
    cin >>image1;

    if (image1 == 5)
    {
      score++;
    }

    cout << " What number do you see on image B?\n";
    cin >>image2;

    if (image2 == 97)
    {
      score++;
    }

    cout << " What number do you see on image C?\n";
    cin >>image3;

    if (image3 == 45)
    {
      score++;
    }


    cout << " What number do you see on image D?\n";
    cin >>image4;

    if (image4 == 7)
    {
      score++;
    }
      
    cout << " What number do you see on image E?\n";
    cin >>image5;

    if (image5 == 8)
    {
      score++;
    }

    cout << " What number do you see on image F?\n";
    cin >>image6;

    if (image6 == 42)
    {
      score++;
    }

    cout << " What number do you see on image G?\n";
    cin >>image7;

    if (image7 == 3)
    {
      score++;
    }

    cout << " What number do you see on image H?\n";
    cin >>image8;

    if (image8 == 74)
    {
      score++;
    }

    cout << " What number do you see on image I?\n";
    cin >>image9;

    if (image9 == 6)
    {
      score++;
    }

    cout << " What number do you see on image J?\n";
    cin >>image10;

    if (image10 == 16)
    {
      score++;
    }

    cout << " What number do you see on image K?\n";
    cin >>image11;

    if (image11 == 2)
    {
      score++;
    }

    cout << " What number do you see on image L?\n";
    cin >>image12;

    if (image12 == 29)
    {
      score++;
    }
    
    cout << " Would you like to restart the test?";
    cin >>decision;

  }while(decision == 'y');

  
  finalvalue = ((score/12) * 100) ;
  
  

  if (score >= 0 && score <= 3)
  {
    cout << "you scored below  " << finalvalue <<"%  , we strongly recommend meeting with your doctor";
  }
  else if (score >= 4 && score <= 6)
  {
    cout << "you scored below  " << finalvalue <<"%  , we recommend meeting with your doctor";
  }
  else if (score >= 7 && score <= 9)
  {
    cout << "you scored an average  " << finalvalue <<"%  or below, it is advised to consult with your doctor";
  }
   else if (score >= 10 && score <= 11)
  {
    cout << "You have a high score of  " << finalvalue <<"%  , might need to consult a doctor";
  }
  else
  {
    cout << "You have perfect vision, you scored  " << finalvalue <<"% , no need to consult a doctor";
  }

  return 0;
}
