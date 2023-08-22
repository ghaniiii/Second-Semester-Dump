#include<iostream>

using namespace std;

int main(){
	
	int Dimension;
	
	cout<<"Enter the Dimensions Of the Triangle : ";
	cin>>Dimension ; cout<<endl;
	
	for(int i=Dimension;i>=1;i--){
		int number = 1;
		for(int j=1;j<=i;j++){
			cout<<number<<" ";
			number++;
		}
		cout<<"\n";
	}
	
	return 0;
}