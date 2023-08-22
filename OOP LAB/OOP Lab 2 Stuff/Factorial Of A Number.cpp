//Take a number from user and find 
//factorial of that number using for loop

#include<iostream>

using namespace std;

int main(){
	
	int Fact_number;
	int Factorial = 1;
	cout<<"Enter the Number That You Want to Find Its Factorial : ";
	cin>>Fact_number; cout<<endl;
	
	for(int i=Fact_number;i>=1;i--){
		Factorial = Factorial * i;
		
	}
	
	cout<<"The Factorial Of the Number "<<Fact_number<<" Is : "<<Factorial<<endl;
	
	
	
	return 0;
}