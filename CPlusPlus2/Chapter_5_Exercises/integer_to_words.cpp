//
// Created by angel on 7/07/2021.
//
#include <cstdio>

void Name_a_number(int number){             //If the number was between ten and twenty, or ended in 0
    switch (number) {
        case 10:
            printf("ten. ");
            break;
        case 11:
            printf("eleven. ");
            break;
        case 12:
            printf("twelve. ");
            break;
        case 13:
            printf("thirteen. ");
            break;
        case 14:
            printf("fourteen. ");
            break;
        case 15:
            printf("fifteen. ");
            break;
        case 16:
            printf("sixteen. ");
            break;
        case 17:
            printf("seventeen. ");
            break;
        case 18:
            printf("eighteen. ");
            break;
        case 19:
            printf("nineteen. ");
            break;
        case 20:
            printf("twenty. ");
            break;
        case 30:
            printf("thirty. ");
            break;
        case 40:
            printf("forty. ");
            break;
        case 50:
            printf("fifty. ");
            break;
        case 60:
            printf("sixty. ");
            break;
        case 70:
            printf("seventy. ");
            break;
        case 80:
            printf("eighty. ");
            break;
        case 90:
            printf("ninety. ");
            break;
    }
}

void Print_a_unit(int unit){                //for the units
    switch (unit) {
        case 1:
            printf("one. ");
            break;
        case 2:
            printf("two. ");
            break;
        case 3:
            printf("three. ");
            break;
        case 4:
            printf("four. ");
            break;
        case 5:
            printf("five. ");
            break;
        case 6:
            printf("six. ");
            break;
        case 7:
            printf("seven. ");
            break;
        case 8:
            printf("eight. ");
            break;
        case 9:
            printf("nine. ");
            break;
        case 0:
            printf("zero. ");
            break;
    }
}
int main(){
    int Tens=0, Units, Number;

    printf("Enter an integer:\n");        //input
    scanf("%1d%1d", &Tens, &Units);
    printf("%d = ", Tens * 10 + Units);

    if (Units == 0){                            //Ruling out numbers that end in 0
        Number = Tens * 10;
        Name_a_number(Number);
    } else if (Tens == 1){                      //Ruling out numbers between 10 and 20
        Number = Tens * 10 + Units;
        Name_a_number(Number);
    } else {                                    //Tens for "regular numbers"
        switch (Tens) {
            case 2:
                printf("twenty ");
                break;
            case 3:
                printf("thirty ");
                break;
            case 4:
                printf("forty ");
                break;
            case 5:
                printf("fifty ");
                break;
            case 6:
                printf("sixty ");
                break;
            case 7:
                printf("seventy ");
                break;
            case 8:
                printf("eighty ");
                break;
            case 9:
                printf("ninety ");
                break;
        }
        Print_a_unit(Units);
    }
}