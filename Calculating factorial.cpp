//
// Created by Aayush Kumar Jaiswal on 20/02/25.
// in class

#include <iostream>
using namespace std;

int main(){
  int num,count=1,factorial=1;
  cout<<"Enter the number to check factorial: ";
  cin>>num;
  for(count;count<=num;count++){
    factorial=count*factorial;
  }
  cout<<"The factorial is: "<<factorial;
  return 0;
}