#include <iostream>
using namespace std;
int main(){
    int ResultNum = 16, ResultDenom = 36, OtherVariable;

    OtherVariable = ResultDenom>ResultNum? ResultNum:ResultDenom;
    for (int i = 2; i < OtherVariable; i++) {
        while(ResultNum % i == 0 && ResultDenom % i == 0 && i <= OtherVariable){
            ResultNum/=i;
            ResultDenom/=i;
        }
    }

    cout<<ResultNum<<"\t"<<ResultDenom;
}