//
// Created by Aayush Kumar Jaiswal on 27/02/25.
// in class

#include <iostream>
using namespace std;

int main(){
    int i,j,k,l;
    for (i=9;i>=1;i--){
        for (k=1;k<=10+i;k++)
            cout<<" ";
        for (j=9;j>=i;j--)
            cout<<j;
        for (l=j+2;l<=9;l++)
            cout<<l;
        cout<<endl;
    }
    for (i=1;i<=9;i++){
        for (k=1;k<=10+i;k++)
            cout<<" ";
        for (j=9;j>=i;j--)
            cout<<j;
        for (l=j+2;l<=9;l++)
            cout<<l;
        cout<<endl;
    }
    return 0;
}

