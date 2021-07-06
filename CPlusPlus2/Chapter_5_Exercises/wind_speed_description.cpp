//
// Created by angel on 6/07/2021.
//
#include <cstdio>

int main(){
    float WindSpeed;

    printf("Enter the wind speed (in knots): ");        //Enter wind speed
    scanf("%f", &WindSpeed);

    printf("The wind speed is described as ");          //Categorising and printing the wind speed
    if (WindSpeed < 1){
        printf("calm.");
    } else if (WindSpeed < 4){
        printf("light air.");
    } else if (WindSpeed < 28){
        printf("a breeze.");
    } else if (WindSpeed < 48){
        printf("a gale.");
    } else if (WindSpeed < 64){
        printf("a storm.");
    } else {
        printf("a hurricane.");
    }

    return 0;
}