//
// Created by angel on 28/12/2021, for exercises testing
//
#include <cstdio>
int main(){
    int a = 47, b = 2, c = 3, d = 1, Original, Parenthesis;

    Original = a * -b /c - d;
    Parenthesis = (((a * (- b)) / c) - d);

    printf("Is %d the same as %d?", Original, Parenthesis);

    return 0;
}