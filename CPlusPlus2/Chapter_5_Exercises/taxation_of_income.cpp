//
// Created by angel on 7/07/2021.
//
#include <cstdio>

int main(){
    int Income;

    printf("Enter the taxable income: ");
    scanf("$%d", &Income);

    printf("The amount of taxable income is: $");
    if (Income < 750){
        printf("%.2f. ", Income * 0.01);
    } else if (Income < 2251){
        printf("%.2f. ", Income * 0.02 + 7.5);
    } else if (Income < 3751){
        printf("%.2f. ", Income * 0.03 + 37.5);
    } else if (Income < 5251){
        printf("%.2f. ", Income * 0.04 + 82.5);
    } else if (Income < 7001){
        printf("%.2f. ", Income * 0.05 + 142.5);
    } else {
        printf("%.2f. ", Income * 0.06 + 230);
    }

    return 0;
}
