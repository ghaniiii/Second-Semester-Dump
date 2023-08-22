#include<iostream>

using namespace std;

int main(){
	
	int Dimension;
	
	cout<<"Enter the Dimensions Of the Traingle : ";
	cin>>Dimension; cout<<endl;
	
	for(int i=Dimension;i>=1;i--){
		for(int j=0; j<=(Dimension-i-1) ;j++){
			cout<<" ";
		}
		for(int k=0;k<i;k++){
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}