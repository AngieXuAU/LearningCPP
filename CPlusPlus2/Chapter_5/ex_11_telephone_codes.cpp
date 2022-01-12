//
// Created by angel on 11/01/2022.
// Displays city (of Georgia, USA) which the entered area code to

#include <iostream>

using namespace std;


int main(){
    int AreaCode;
    
    cout << "Enter the area code:\n";
    cin >> AreaCode;

    switch (AreaCode) {
    case 404: case 470: case 678: case 770:
        cout << "Atlanta";
        break;
    case 229:
        cout << "Albany";
        break;
    case 478:
        cout << "Macon";
        break;
    case 706: case 762:
        cout << "Columbus";
        break;
    case 912:
        cout << "Savannah";
        break;
    default:
        cout << "Area code not recognised";
        break;
    }

    return 0;
}