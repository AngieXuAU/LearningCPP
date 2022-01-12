//
// Created by angel on 11/01/2022.
// Comparing two functions of if statements
#include <iostream>

using namespace std;


char NegativeGrading(int score_percentage);         //declaration of functions

char PositiveGrading(int score_percentage);


int main(){

    for (int i = 0; i <= 100; ++i) {                //loop to test all possible scores
//        cout << NegativeGrading(i) << "\t" << PositiveGrading(i) << "\n";
        if (NegativeGrading(i) != PositiveGrading(i)){      //execute if functions produce different grade
            cout << "The if statements tested are not equivalent";
            return 0;
        }
    }

    cout << "The if statements tested are equivalent.\n";                              //execute if functions produced all same grades

    return 0;
}


char NegativeGrading(int score_percentage){         //first function
    if (score_percentage < 60){
        return 'F';
    } else if (score_percentage < 70) {
        return 'D';
    } else if (score_percentage < 80) {
        return 'C';
    } else if (score_percentage < 90) {
        return 'B';
    } else {
        return 'A';
    }
}

char PositiveGrading(int score_percentage){         //second function
    if (score_percentage >= 90){
        return 'A';
    } else if (score_percentage >= 80){
        return 'B';
    } else if (score_percentage >= 70){
        return 'C';
    } else if (score_percentage >= 60){
        return 'D';
    } else {
        return 'F';
    }
}