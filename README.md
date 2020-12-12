Color Blindness Test

## Description

My program asks the user to view 12 images and send their input into the program. The program then evaluate their answers with the correct answers and lets the user know wheather they are colorblind and if so which colors affect them.

## Developer

Pranav Gopalakumaran

## Example

To run the program, give the following commands:

```
g++ --std=c++11 Questionaire.cpp main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
-----------------------------------------------
              Assessment Results
-----------------------------------------------
You have trouble seeing the folowing colors: 

 1.  Green
 2.  Orange
 3.  Light Green
 4.  Maroon
 5.  Pink
 6.  Olive Green
 7.  Dark Green
 8.  Light Red
 9.  Blueish Green
10.  Pale Red
11.  Light Pink

```


### Variables and Data Types

 variables:

  answers - This is a vector that holds the possible answers to the user's responses.
  response - This is a vector that holds all the user's inputs. It is pushed into this vector while answering a question in the main program.
  output - This is a vector that holds the list of colors to which a person could be colorblind.
  i,j,k - These are temporary values needed to run "for loops" in the program.
  input - I used this variable to get the user input and push it into a vector.
  valuetoreturn - This is also a temporary variable that stores the color the person is color blind to.
  

 Data Types:

  string - This data type is used in the vector output and colors as they contain letters.
  int - This data type is found in the vector response and answers, they are also used to define i, j and k.


### Input and Output

The input for the program is recieved 12 times using a "for loop" to read. This calculates whether the user is colorblind or not. The Calculation function calculates the outcome for each question using vectors.

### Decisions

If the user's input matches the values in the vector "answer" the user is not color blind to that color. Only if the user input doesn't match the values in the vector "answers" it returns a value that displays 

### Iteration

There are 3 "for loops" in this program. The "i" loop is to gain input from the users.
The "j" loop is used to calculate whether the input matches with the number and The "k" loop is used to display the output of the program.

### Arrays/Vectors

There are 5 Vectors used in my program:

answers - This vector contains the correct answers to the user's input via "input.txt" file.
response - This is the user's answers collected via "input.txt" file.
colors - This is the vector that holds the colors the user is colorblind towards.
calculation - This is the vector that determines wheather a user is color blind to a specific color by comparing response and answers vector.
colornames - This is the vector that will show the user the list of colors they may have trouble viewing through Calculation vector. 

### File i/o

File input and output are used in my program to obtain user input and show the user their results. 


### Functions

I have used 3 functions in my program:

getuserresponse - This is the function that collects the user's inputs via "input.txt" file. The function sends the results into the response vector.

determinecolorblindness - This is the function that calculates wheather the user is color blind to a specific color and if the user is colorblind, the color is sent to the colors vector to be displayed in the final list. 

printresults - This is the final function, using the colornames vector it prints of all the colors the user is colorblind towards in "output.txt" file.


### Classes
There is 1 class in my program:

ColorBlindnessTest - This is the core part of my program, it holds all my functions and my vectors. The class makes it so I don't need parameters passed to any functions. 
