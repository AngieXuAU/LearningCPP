#include <cstring>
#include <cstdio>
using namespace std;
char String[1001];
int main(){
    gets(String);
    int Length, j;
    Length=strlen(String);
    for (int i = 0; i < Length; ++i) {
        if (String[i]==' '){
            printf(" ");
        } else {
            int k=0;
            for (int j = i; String[j] != ' ' ; j++) {
                k++;
                if(j>=Length){
                    break;
                }
                j--;
                k--;
                for (j = j; j>= i; --j) {
                    printf("%c", String[j]);
                }
                i+=k;
            }
        }
    }
    return 0;
}