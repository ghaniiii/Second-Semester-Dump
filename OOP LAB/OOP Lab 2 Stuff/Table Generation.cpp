//Take a number from user and make a 
//table of that number using for loop

#include<iostream>

using namespace std;

int main(){
	
	int Table_number;
	
	cout<<"Enter the Number That You Want To Print Its Table : ";
	cin>>Table_number; cout<<endl;
	
	for(int i=1;i<=10;i++){
		cout<<Table_number<<" X "<<i<<" = "<<Table_number*i<<endl;
	}

	
	return 0;
}