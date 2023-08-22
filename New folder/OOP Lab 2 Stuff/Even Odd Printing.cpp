//Write a C++ program which display 
//even and odd number using for loop

#include<iostream>

using namespace std;

int main(){
	
	int Odd_limit;
	
	cout<<"Enter the Limit Till You Want to Print The Odd Numbers : ";
	cin>>Odd_limit; cout<<endl;
	
	int Even_limit;
	
	cout<<"Enter the Limit Till You Want To Print The Even Numbers : ";
	cin>>Even_limit; cout<<endl;
	
	cout<<"The Odd Numbers Are : ";
	for(int i=1;i<=Odd_limit;i++){
		
		if(i%2!=0){
			cout<<i;
			cout<<" ";
		}
		
	}
	cout<<endl<<endl;
	
	
	cout<<"The Even Numbers Are : ";
	for(int i=1;i<=Even_limit;i++){
		
		if(i%2==0){
			cout<<i;
			cout<<" ";	
		}
		
	}
	
	
	return 0;
}