#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int number;
	
	cout<<"ENTER THE NUMBER : ";
	cin>>number;
	
	int *address; 
	address = &number;
	
	cout<<"Address Is : "<<address<<endl;
	
}