//
// Created by Aayush Kumar Jaiswal on 17/02/25.
// in class using for loop

#include <iostream>
#include <math.h>

using namespace std;
int main(){
  int num=1000,root2,f2,l2,rootf2,rootl2;
  for (num=1000; num<=9999; num++){
    root2=sqrt(num);
    if(root2*root2==num){
      cout<<num<< " is a perfect square" <<endl;
      }
    f2=num/100;
    l2=num%100;
    rootf2=sqrt(f2);
    if(rootf2*rootf2==f2 && rootl2*rootl2==l2){
      cout<<num<< " is a perfect square" <<endl;
    }
    else
      cout<<num<< " is not a perfect square"<<endl;
  }
  return 0;
}