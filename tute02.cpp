/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

int main()
{
  //varable declaration
    double salary, netSalary;
    int etype, otHrs, otRate;

  //keyboard input
    std::cout<<"Enter Employee Type : ";
    std::cin>>etype;

    std::cout<<"Enter Salary : ";
    std::cin>>salary;

    std::cout<<"Enter OtHrs : ";
    std::cin>>otHrs;

  //condition
    switch (etype)
    {
        case 1 :
                  otRate = 1000;
                  break;
        case 2 :
                  otRate = 1500;
                  break;
        default :
                  otRate = 1700;
                 
    }
    //calculation
    netSalary = salary + otHrs* otRate;

    //output
    std::cout<<"Net Salary is " <<netSalary<<std::endl;
    
    return 0 ;
}