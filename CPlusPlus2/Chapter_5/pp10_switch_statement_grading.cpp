//
// Created by angel on 12/01/2022.
//
#include <iostream>

using namespace std;


int main(){
    int TensNumericalGrade, TotalNumericalGrade;

    cout << "Enter numerical grade:\n";
    cin >> TotalNumericalGrade;

    TensNumericalGrade = TotalNumericalGrade / 10;

    cout << "Letter grade:\n";
    switch (TensNumericalGrade) {
        case 9:
            cout << "A";
            break;
        case 8:
            cout << "B";
            break;
        case 7:
            cout << "C";
            break;
        case 6:
            cout << "D";
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            cout << "F";
            break;
        default:
            cout << "Error in grade - grade not possible";
            break;
    }

    return 0;
}