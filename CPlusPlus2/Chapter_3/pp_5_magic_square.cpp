//
// Created by angel on 3/07/2021.
//
#include <cstdio>
int OrderOfNumbers[4][4];
int SumOfRows[4], SumOfColumns[4], SumOfDiagonals[2] = {0, 0};

int main(){
    printf("Enter the numbers from 1 to 16 in any order:\n");       //Request input

    for (int i = 0; i < 4; ++i) {                                   //Input loop
        SumOfRows[i] = 0;
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &OrderOfNumbers[i][j]);
            SumOfRows[i] += OrderOfNumbers[i][j];                   //Sum of rows
            if(i == j) {                                            //Sum of diagonals
                SumOfDiagonals[0] += OrderOfNumbers[i][j];
            } else if (i+j == 3) {
                SumOfDiagonals[1] += OrderOfNumbers[i][j];
            }
        }
    }

    for (int i = 0; i < 4; ++i) {                                   //Sums of columns
        SumOfColumns[i] = 0;
        for (int j = 0; j < 4; ++j) {
            SumOfColumns[i] += OrderOfNumbers[j][i];
        }
    }

    
    for (int i = 0; i < 4; ++i) {                                   //Output of number grid
        for (int j = 0; j < 4; ++j) {
            printf("%3d", OrderOfNumbers[i][j]);
        }
        printf("\n");
    }

    printf("\n\nRow sums:");
    for (int i = 0; i < 4; ++i) {                                   //Output of sums
        printf("%3d", SumOfRows[i]);
    }
    printf("\nColumn sums:");
    for (int i = 0; i < 4; ++i) {
        printf("%3d", SumOfColumns[i]);
    }
    printf("\nDiagonal sums:");
    for (int i = 0; i < 2; ++i) {
        printf("%3d", SumOfDiagonals[i]);
    }
    printf("\n");

    return 0;
}