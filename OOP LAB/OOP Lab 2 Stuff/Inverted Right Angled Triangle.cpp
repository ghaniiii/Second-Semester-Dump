#include<iostream>

using namespace std;

int main(){
	
	int Dimension;
	
	cout<<"Enter the Dimensions Of the Triangle : ";
	cin>>Dimension ; cout<<endl;
	
	for(int i=Dimension;i>=1;i--){
		
		for(int j=1;j<=i;j++){
			cout<<"* ";
			
		}
		cout<<"\n";
	}
	
	return 0;
}