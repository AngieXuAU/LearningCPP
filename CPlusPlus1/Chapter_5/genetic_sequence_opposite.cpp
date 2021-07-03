#include<cstring>
#include<iostream>
using namespace std;
int main(){
	char Sequence[255];
	char OppSeq[255];
	gets(Sequence);
	
	for(int i=0; i<strlen(Sequence); i++){
		switch(Sequence[i]){
			case 'A':
				OppSeq[i]='T';
				continue;
			case 'T':
				OppSeq[i]='A';
				continue;
			case 'G':
				OppSeq[i]='C';
				continue;
			case 'C':
				OppSeq[i]='G';
				continue;
		}
//		if(Sequence[i]=='A'){
//			OppSeq[i]='T';
//		} else if(Sequence[i]=='T'){
//			OppSeq[i]='A';
//		} else if(Sequence[i]=='G'){
//			OppSeq[i]='C';
//		} else {
//			OppSeq[i]='G';
//		}
	}
	
	puts(OppSeq);
	return 0;
}
