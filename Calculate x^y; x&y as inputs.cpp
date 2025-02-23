//
// Created by Aayush Kumar Jaiswal on 20/02/25.
// in class

#include <iostream>
using namespace std;

int main(){
  int x,y,exp=1;
  cout<<"Enter the number to be exponentiated: ";
  cin>>x;
  cout<<"Enter the exponential factor: ";
  cin>>y;
  for(y;y>0;y--){
    exp=exp*x;
  }
  cout<<"x^y = "<<exp<<endl;
  return 0;
}