//
// Created by angel on 12/01/2022.
//
#include <iostream>

using namespace std;


double CalculateBrokerCommission(float price_of_shares);

double CalculateRivalCommission(int number_of_shares);


int main(){
    float TradeValue, SharesNumber, SharesPrice;

    cout << "Enter number of shares bought:\n";
    cin >> SharesNumber;
    cout << "Enter the price per share:\n";
    cin >> SharesPrice;
    TradeValue = SharesPrice * SharesNumber;

    cout << "Commission: $" << CalculateBrokerCommission(TradeValue) << "\nCommission of rival broker: $" << CalculateRivalCommission(SharesNumber);

    return 0;
}


double CalculateBrokerCommission(float price_of_shares){
    if (price_of_shares < 2500){
        return (30 + price_of_shares * 1.7 / 100);
    } else if (price_of_shares < 6250){
        return (56 + price_of_shares * 0.66 / 100);
    } else if (price_of_shares < 20000){
        return (76 + price_of_shares * 0.34 / 100);
    } else if (price_of_shares < 50000){
        return (100 + price_of_shares * 0.22 / 100);
    } else if (price_of_shares < 500000){
        return (155 + price_of_shares * 0.11 / 100);
    } else {
        return (255 + price_of_shares * 0.09 * 100);
    }
}


double CalculateRivalCommission(int number_of_shares){
    if (number_of_shares < 2000){
        return 33 + number_of_shares * 0.03;
    } else {
        return 33 + number_of_shares * 0.02;
    }
}