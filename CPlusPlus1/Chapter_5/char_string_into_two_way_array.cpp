#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char Input[100];
    char Sequence[10][20];
    int j=0, k=0;

    gets(Input);
    for (int i = 0; i < strlen(Input); ++i) {
        if (Input[i]!=' '){
            if (Input[i-1]!=' '){
                Sequence[j][k++]=Input[i];
            } else {
                k=0;
                Sequence[++j][k++]=Input[i];
            }
        }
    }

    for (int i = 0; i <= j; ++i) {
        puts(Sequence[i]);
        cout<<endl;
    }
}