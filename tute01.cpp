
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

#include <iostream>
int main()
{
  float data1, data2;
  std::cout<<"Enter Length in cm : ";
  std::cin>>data1;
  data2 = data1 / 2.54 ;
  std::cout<<data2;

  return 0;

}