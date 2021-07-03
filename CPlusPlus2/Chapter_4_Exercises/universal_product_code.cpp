//
// Created by angel on 3/07/2021.
//
#include <cstdio>

int main(){
    int ProductType, Sum1, Sum2, OD1, ED2, OD3, ED4, OD5, ED6, OD7, ED8, OD9, ED10, Total;

    printf("Enter the first (single) digit: ");                 //Input
    scanf("%1d", &ProductType);
    printf("Enter the next batch of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &OD1, &ED2, &OD3, &ED4, &OD5);
    printf("Enter the next batch of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &ED6, &OD7, &ED8, &OD9, &ED10);

    Sum1 = ProductType + ED2 + ED4 + ED6 + ED8 + ED10;          //Calculations
    Sum2 = OD1 + OD3 + OD5 + OD7 + OD9;
    Total = 3 * Sum1 + Sum2;

    printf("The check digit is: %d\n", 9 - ((Total - 1) % 10)); //Output
}