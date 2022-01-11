//
// Created by angel on 11/01/2022.
//
#include <cstdio>

int main(){
    int Year_Number, Month_Number, Date;

    printf("Enter a date (dd/mm/yyyy):\n");                      //input
    scanf("%d/%d/%d", &Date, &Month_Number, &Year_Number);

    printf("You entered the date %d", Year_Number);              //output
    if (Month_Number < 10){                                             //0 before months before October
        printf("0");
    }
    printf("%d%d", Month_Number, Date);

    return 0;
}