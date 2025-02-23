//
// Created by Aayush Kumar Jaiswal on 21/02/25.
// self-practice

#include <iostream>
using namespace std;
int main(){
  int num,count=0;
  cout<<"Enter the number to be checked: ";
  cin>>num;
  if(num<=1){
    cout<<num<<" is not a prime number."<<endl;
  }
  else{
    for (int counter=1;counter<=num;counter++){
      if(num%counter==0){
        count++;
      }
    if(count>2){
      cout<<num<<" is not a prime number."<<endl;
    }
    else{
      cout<<num<<" is a prime number."<<endl;
    }
    }
  }
