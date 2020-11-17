Color Blindness Test

## Description

My program asks the user to take a color blindness test, evaluates them results and gives them an appropriate response to their test attempt.

## Developer

Pranav Gopalakumaran

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Welcome to the color blindness test
By the end of this test we will have an idea of what type of color blindness you might have
What number do you see in picture 1 ?(Enter 99 if no number is visible)5
What number do you see in picture 2 ?(Enter 99 if no number is visible)97
What number do you see in picture 3 ?(Enter 99 if no number is visible)53
```




### Variables and Data Types

 variables:

  answers - This is a vector that holds the possible answers to the user's responses.
  response - This is a vector that holds all the user's inputs. It is pushed into this vector while answering a question in the main program.
  output - This is a vector that holds the list of colors to which a person could be colorblind.
  i,j,k - These are temporary values needed to run "for loops" in the program.
  input - I used this variable to get the user input and push it into a vector.
  valuetoreturn - This is also a temporary variable that stores the color the person is color blind to.
  arr - This is an arry that is holding the answers to the user input. I am sending this array into the vector answers.

 Data Types:

  string - This data type is used in the vector output and colors as they contain letters.

  int - This data type is found in the vector response and answers, they are also used to define i, j and k.


### Input and Output

The input for the program is recieved 12 times using a "for loop" to read. This calculates whether the user is colorblind or not. The Calculation function calculates the outcome for each question using vectors.

### Decisions

If the user's input matches the values in the vector "answer" the user is not color blind to that color. Only if the user input doesn't match the values in the vector "answers" it returns a value that displays 

### Iteration

There are 3 "for loops" in this program. The i loop is to gain input from the users.
The j loop is used to calculate whether the input matches with the number and The k loop is used to display the output of the program.

