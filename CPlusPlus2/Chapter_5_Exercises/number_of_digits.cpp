//
// Created by angel on 6/07/2021.
//
#include <cstdio>

int main(){
    int Number;

    printf("Enter the number: \n");                 //Input
    scanf("%d", &Number);

    printf("The number %d has ", Number);           //Output
    if (Number<10){                                 //Figuring out how many digits, complete output
        printf("1 digit.");
        return 0;
    } else if(Number<100){
        printf("2 digits. ");
        return 0;
    } else if(Number<1000){
        printf("3 digits. ");
        return 0;
    } else {
        printf("4 digits. ");
        return 0;
    }

}