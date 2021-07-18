/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

int main() 
{
  //variable declaration
  int no;
  long fac;

  //keyboard input
  std::cout<<"Enter a Number : ";
  std::cin>>no;

  //repitition
  fac = 1;
  for (int r=no; r >= 1; r--) 
  {
      fac = fac * r;
  }

  //output
  std::cout<<" Factorial of " << no << "is" << fac << std::endl; 

  return 0;

}