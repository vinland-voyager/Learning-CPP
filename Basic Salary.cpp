//
// Created by Aayush Kumar Jaiswal on 10/02/25.
//
#include <iostream>
using namespace std;
int main() {
  double basicpay, grosspay, hra, da;
  cout << "Enter basic pay amount: ";
  cin >> basicpay;
  if (basicpay > 15000) {
    hra = basicpay*0.3;
    da = basicpay*0.5;
  }
  else {
    da = basicpay*0.3;
    hra = basicpay*0.2;
  }
  grosspay = basicpay + da + hra;
  cout << grosspay;
  return 0;
}