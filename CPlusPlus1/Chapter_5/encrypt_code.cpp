#include<cstring>
#include<iostream>
using namespace std;
int main(){
	char Code[80];
	char Encrypted[80];
	gets(Code);

	int length = strlen(Code);
	int i;
	for(i=0; i<length; i++){
	    // char is 65 - A or char is 97 - a , a ==> z
		if(int(Code[i])==65 || int(Code[i])==97){
			Encrypted[i]=Code[i]+25;
		} else {
			Encrypted[i]=Code[i]-1;
		}
	}
	Encrypted[i] = '\0';
	
	puts(Encrypted);
	return 0;
}
