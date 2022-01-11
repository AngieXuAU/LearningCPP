//
// Created by angel on 11/01/2022.
// currently testing switch

#include <iostream>

using namespace std;

int main(){
    int Score;

    cout << "Enter student score (0-5):\n";
    cin >> Score;

    switch (Score) {
        case 5: cout << "Outstanding";
            break;
        case 4: cout << "High";
            break;
        case 3: cout << "Sound";
            break;
        case 2: cout << "Limited";
            break;
        case 1: cout << "Basic";
            break;
        case 0: cout << "None/Not Attempted";
            break;
        default: cout << "Illegal grade";
            break;
    }
}