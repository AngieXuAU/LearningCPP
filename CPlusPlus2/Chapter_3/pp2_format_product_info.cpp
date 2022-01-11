//
// Created by angel on 11/01/2022.
//
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int ItemNumber, PurchaseDate, PurchaseMonth, PurchaseYear;
    float UnitPrice;

    cout << "Enter item number:\n";             //input
    cin >> ItemNumber;
    cout << "Enter unit price:\n";
    cin >> UnitPrice;
    printf("Enter purchase date (dd/mm/yyyy):\n");
    scanf("%d/%d/%d", &PurchaseDate, &PurchaseMonth, &PurchaseYear);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-8d\t$%7f\t%d/%d/%d", ItemNumber, UnitPrice, PurchaseDate, PurchaseMonth, PurchaseYear);  //output
}