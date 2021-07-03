//
// Created by angel on 3/07/2021.
//
#include <iostream>
using namespace std;

int Reversed(int input){                //Function to reverse digits
    int output = 0;

    while(input != 0){                  //Reversing digits
        output *= 10;
        output += input % 10;
        input/=10;
    }

    return output;
}

int main(){
    int Input;

    cout<<"Enter the initial number: \n";
    cin>>Input;                         //Input

    cout<<Reversed(Input);              //Input
}