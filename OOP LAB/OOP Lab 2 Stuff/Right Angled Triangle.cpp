#include<iostream>

using namespace std;

int main(){
	
	int Size;
	
	cout<<"Enter the Rows And Columns / Size Of the Triangle : ";
	cin>>Size; cout<<endl;
	
	for(int i=1;i<=Size;i++){
			for(int j=1;j<=i;j++){
				cout<<"* ";
			}
		cout<<"\n";
	}
	
	
	
	return 0;
}