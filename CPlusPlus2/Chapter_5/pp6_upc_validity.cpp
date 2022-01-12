//
// Created by angel on 12/01/2022.
// Validity of a UPC (when entering digits, add space between each)
#include <iostream>

using namespace std;

bool CheckUPC(int first_sum, int second_sum, int check_digit);


int main(){
    int InputDigit, Sum0 = 0, Sum1 = 0;

    cout << "Enter the first (single) digit:\n";
    cin >> InputDigit;

    Sum0 += InputDigit;

    cout << "Enter first group of five digits:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> InputDigit;
        if ((i % 2) == 0){
            Sum1 += InputDigit;
        } else {
            Sum0 += InputDigit;
        }
    }

    cout << "Enter second group of five digits:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> InputDigit;
        if ((i % 2) == 0){
            Sum0 += InputDigit;
        } else {
            Sum1 += InputDigit;
        }
    }

    cout << "Check digit:\n";
    cin >> InputDigit;

    if (CheckUPC(Sum0, Sum1, InputDigit)){
        cout << "VALID";
    } else {
        cout << "NOT VALID";
    }

    return 0;
}

bool CheckUPC(int first_sum, int second_sum, int check_digit){
    int final_sum;

    final_sum = 9 - ((first_sum * 3 + second_sum - 1) % 10);

    if (final_sum == check_digit){
        return true;
    } else {
        return false;
    }
}