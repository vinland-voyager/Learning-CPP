//
// Created by Aayush Kumar Jaiswal on 13/02/25.
// in class

#include <iostream>
using namespace std;
int main() {
  int num=40, count=0;
//  cout<<"Enter the number to be tested: ";
//  cin>>num;
  while(num)
  {
    num=num/10;
    count++;
  }
  cout<<"Number of digits in a number is: "<<count;
  return 0;
}
