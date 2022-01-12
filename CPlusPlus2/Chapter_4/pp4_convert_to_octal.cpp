//
// Created by angel on 12/01/2022.
//

#include <cstdio>


int OctalOutput = 0, index = 0, additive;


int OctalConversion(int input){
    while(input != 0){
        additive = (input % 8);
        for (int i = 0; i < index; ++ i) {
            additive *= 10;
        }
        input /= 8;
        OctalOutput += additive;
        index ++;
    }

    return OctalOutput;
}


int main(){
    int InputDecimal;

    printf("Enter a number between 0 and 32767:\n");        //input
    scanf("%d", &InputDecimal);

    printf("In octal, your number is: %05d", OctalConversion(InputDecimal));      //output (calling on conversion to octal)

    return 0;
}