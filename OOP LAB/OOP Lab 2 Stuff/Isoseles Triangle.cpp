#include<iostream>

using namespace std;

int main(){
	
	int Dimension;
	
	cout<<"Enter the Dimensions Of the Traingle : ";
	cin>>Dimension; cout<<endl;
	
	for(int i=0;i<=Dimension;i++){
		for(int j=0; j<=(Dimension-i-1) ;j++){
			cout<<" ";
		}
		for(int k=0;k<=i*2;k++){
			cout<<"*";
		}
		
		cout<<"\n";
	}
	
	return 0;
}