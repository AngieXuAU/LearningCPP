//
// Created by angel on 11/01/2022.
//
#include <iostream>

using namespace std;

int main(){
    int i = 17, Expression;

    Expression = i >= 0 ? i : -i;

    cout << Expression << "\n";

    i = -17;
    Expression = i >= 0 ? i : -i;

    cout << Expression << "\n";
    return 0;
}