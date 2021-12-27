//
// Created by angel on 7/07/2021.
//
#include <iostream>
using namespace std;

int main(){
    int Smallest, Largest, Int[4];

    cout << "Enter the four integers with a space in between each: " << endl;       //Input
    for (int i = 0; i < 4; ++i) {
        cin >> Int[i];
    }

    Smallest = Int[0], Largest = Int[0];                                    //Finding smallest and largest, using control variable
    for (int i = 1; i < 4; ++i) {
        if (Int[i] < Smallest){
            Smallest = Int[i];
        } else if (Int[i] > Largest){
            Largest = Int[i];
        }
    }

    cout << "Largest: " << Largest << endl << "Smallest: " << Smallest;         //Output
    return 0;
}