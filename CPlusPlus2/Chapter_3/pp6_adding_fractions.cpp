//
// Created by angel on 3/07/2021.
//
#include <cstdio>

int main(){
    int Num1, Num2, Denom1, Denom2, ResultNum, ResultDenom, OtherVariable;
    printf("Enter the two fractions in the form a/b+c/d: \n");

    scanf("%d/%d+%d/%d", &Num1, &Denom1, &Num2, &Denom2);           //Input

    ResultNum = Num1 * Denom2 + Num2 * Denom1;                      //Calculation
    ResultDenom = Denom1 * Denom2;
    OtherVariable = ResultDenom>ResultNum? ResultNum:ResultDenom;

    for (int i = 2; i < OtherVariable; ++i) {      //Simplify fraction
        while (ResultNum % i == 0 && ResultDenom % i == 0 && i <= OtherVariable){
            ResultNum/=i;
            ResultDenom/=i;
        }
    }

    printf("The sum is %d/%d.", ResultNum, ResultDenom);          //Output
}