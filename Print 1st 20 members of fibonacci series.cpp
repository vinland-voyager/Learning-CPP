//
// Created by Aayush Kumar Jaiswal on 13/02/25.
// in class

#include <iostream>
using namespace std;
int main(){
  int count,counter=2,num1=0,num2,inc;
  cout<<"Enter the length of the fibonacci series to be printed: ";
  cin>>count;
  cout<<num1<<endl<<num2<<endl;
  while(counter<count){
    inc=num1+num2;
    cout<<inc<<endl;
    num1=num2;
    num2=inc;
    counter++;
  }
  return 0;
}