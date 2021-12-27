//
// Created by angel on 7/07/2021.
//
#include <cstdio>

int main(){
    int Day[2], Month[2], Year[2];

    printf("Enter first date (dd/mm/yy):\n");                    //Input
    scanf("%d/%d/%d", &Day[0], &Month[0], &Year[0]);
    printf("Enter second date (dd/mm/yy):\n");
    scanf("%d/%d/%d", &Day[1], &Month[1], &Year[1]);

    if (Year[0] == Year[1]){                                    //Comparison and output
        if (Month [0] == Month[1]){
            if (Day[0] == Day[1]){
                printf("They are the same day.");
                return 0;
            } else {
                Day[0] < Day[1] ? printf("%2d/%2d/%2d", Day[0], Month[0], Year[0]): printf("%2d/%2d/%2d", Day[1], Month[1], Year[1]);
            }
        } else {
            Month[0] < Month[1] ? printf("%2d/%2d/%2d", Day[0], Month[0], Year[0]): printf("%2d/%2d/%2d", Day[1], Month[1], Year[1]);
        }
    } else {
        Year[0] < Year[1] ? printf("%2d/%2d/%2d", Day[0], Month[0], Year[0]): printf("%2d/%2d/%2d", Day[1], Month[1], Year[1]);
    }

    printf(" is earlier.");
    return 0;
}