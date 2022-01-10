//
// Created by angel on 28/12/2021, for exercises testing
//
#define NEW_DEFINITION 0.089
#include <cstdio>
int i = 6, j;
int main(){
    j = i += i;
    printf("%d %d", i, j);
}