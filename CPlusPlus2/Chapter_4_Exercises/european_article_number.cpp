//
// Created by angel on 3/07/2021.
//
#include <cstdio>

int main(){
    int TemporaryInput, FirstSum = 0, SecondSum = 0, Total;

    printf("Enter the first twelve digits of an EAN: \n");
    for (int i = 0; i < 12; ++i) {
        scanf("%1d", &TemporaryInput);
        if ((i+2) % 2 == 0){
            FirstSum += TemporaryInput;
        } else {
            SecondSum += TemporaryInput;
        }
    }

    Total = SecondSum * 3 + FirstSum - 1;

    printf("Check digit: %d", (9 - (Total % 10)));
}