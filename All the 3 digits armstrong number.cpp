//
// Created by Aayush Kumar Jaiswal on 17/02/25.
// in class
// What is armstrong number? Numbers whose sum (digit ^ no.of digits)

#include <iostream>
using namespace std;

int main(){
  int count=0,num=100,d1,d2,d3,sum;
  while (num<=999) {
    d1=(num/100);       //253/100 = 2
    d2=(num/10)%10;     //(253/10=25)%10 = 5
    d3=(num%100)%10;    //253%100 = 53%10 = 3
    sum=d1*d1*d1+d2*d2*d2+d3*d3*d3; //Sum of digits cubed
    if (sum==num)
    {
      printf("%d\t",num);
      count++;
    }
    num++;
  }
  cout<<endl<<"Total number of 3 digits armstrong numbers: "<<count;
  return 0;
}