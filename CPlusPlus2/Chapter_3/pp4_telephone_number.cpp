//
// Created by angel on 12/01/2022.
//

#include <cstdio>

int main (){
    int Part1, Part2, Part3;

    printf("Enter phone number [(xxx) xxx-xxxx]:\n");           //input
    scanf("(%d) %d-%d", &Part1, &Part2, &Part3);

    printf("You entered %d.%d.%d\n", Part1, Part2, Part3);      //output

    return 0;
}