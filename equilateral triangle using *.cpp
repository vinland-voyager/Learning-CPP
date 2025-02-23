//
// Created by Aayush Kumar Jaiswal on 20/02/25.
// class homework

#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows of right triangle: ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            for (int k=j/2;k>0;)
                cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}