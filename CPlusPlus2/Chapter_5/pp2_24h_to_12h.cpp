//
// Created by angel on 6/07/2021.
//
#include <cstdio>

int main(){
    int Time, Hours, Minutes;

    printf("Enter a 24 hour time (hhmm): ");        //Input of 24h time
    scanf("%d", &Time);
                                                    //Categorisation of time
    if (Time < 100){                                //If the time was before 1 in the morning
        Hours = 12;
        Minutes = Time;
        printf("%d:%.2d AM", Hours, Minutes);
    } else if (Time < 1300){                        //If the time was before 1 in the afternoon
        Hours = Time / 100;
        Minutes = Time % 100;
        printf("%d:%.2d ", Hours, Minutes);
        if (Time < 1200){
            printf("AM");
        } else {
            printf("PM");
        }
    } else {                                        //If the tie was in the afternoon/evening
        Hours = Time / 100 - 12;
        Minutes = Time % 100;
        printf("%d:%.2d PM", Hours, Minutes);
    }

    return 0;

}