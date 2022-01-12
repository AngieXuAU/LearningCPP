//
// Created by angel on 12/01/2022.
// Calculates the closest time of departure and arrival for any given time
#include <cstdio>

int ClosestFlightTimeFinder(int minutes_since_midnight);


bool StatusMatched = false;


int main(){
    int TimeHours, TimeMinutes, MinutesSinceMidnight;

    printf("Enter a 24-hour time:\n");
    scanf("%d:%d", &TimeHours, &TimeMinutes);

    MinutesSinceMidnight = TimeHours * 60 + TimeMinutes;

    printf("Closest departure time is ");

    switch (ClosestFlightTimeFinder(MinutesSinceMidnight)) {
        case 480:
            printf("8:00a.m., arriving at 10:16a.m.");
            return 0;
        case 583:
            printf("9:43a.m., arriving at 11:52a.m.");
            return 0;
        case 679:
            printf("11:19a.m., arriving at 1:31p.m.");
            return 0;
        case 767:
            printf("12:47p.m., arriving at 3:00p.m.");
            return 0;
        case 840:
            printf("2:00p.m., arriving at 4:08 p.m.");
            return 0;
        case 945:
            printf("3:45p.m., arriving at 5:55p.m.");
            return 0;
        case 1140:
            printf("7:00p.m., arriving at 9:20p.m.");
            return 0;
        case 1305:
            printf("9:45p.m., arriving at 11:58p.m.");
            return 0;
        default:
            break;
    }
    printf("\n\a");

    return 0;
}


int ClosestFlightTimeFinder(int minutes_since_midnight){
    int flight_before, flight_after;
    
    flight_before = minutes_since_midnight;
    flight_after = minutes_since_midnight;

    while (! StatusMatched){
        -- flight_before;
        switch (flight_before) {
            case 480:
                return 480;
            case 583:
                return 583;
            case 679:
                return 679;
            case 767:
                return 767;
            case 840:
                return 840;
            case 945:
                return 945;
            case 1140:
                return 1140;
            case 1305:
                return 1305;
            default:
                break;
        }
        ++ flight_after;
        switch (flight_after) {
            case 480:
                return 480;
            case 583:
                return 583;
            case 679:
                return 679;
            case 767:
                return 767;
            case 840:
                return 840;
            case 945:
                return 945;
            case 1140:
                return 1140;
            case 1305:
                return 1305;
            default:
                break;
        }
    }
}