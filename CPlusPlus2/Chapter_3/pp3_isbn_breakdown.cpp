//
// Created by angel on 11/01/2022.
//
#include <cstdio>

int main(){
    int GS1Prefix, GroupID, PublisherCode, ItemNumber, CheckDigit;

    printf("Enter ISBN:\n");        //input
    scanf("%d-%d-%d-%d-%d", &GS1Prefix, &GroupID, &PublisherCode, &ItemNumber, &CheckDigit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", GS1Prefix, GroupID, PublisherCode, ItemNumber, CheckDigit); //output

    return 0;
}