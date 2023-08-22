#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int *myName = new int[5];
	
		for(int i=0;i<5;i++){
			cout<<"Enter Values At index "<<i<<" : "<<endl;
			cin>>myName[i];	
		}
		
		for(int i=0;i<5;i++){
			cout<<"The Entered Values Are At "<<i<<" Are :  "<<myName[i]<<endl;
		}
	
	return 0;
}
