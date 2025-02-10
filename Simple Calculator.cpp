// Created by Aayush Kumar Jaiswal on 10/02/25 in class
// Making a simple calculator
// Using Switch Case

#include <iostream>
using namespace std;
int main() {
  char sign; int a,b,r;
  cout<<"Enter simple equation: ";
  cin>>a>>sign>>b;
  switch (sign) {
    case '+':
      r=a+b;
      break;
    case '-':
      r=a-b;
      break;
    case '*':
      r=a*b;
      break;
    case '/':
      r=a/b;
      break;
    default:
      cout<<"Invalid Input";
  }
  cout<<r;
  return 0;
}
