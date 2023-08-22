#include<iostream>
#include<string.h>

using namespace std;

// Assignment take 6 subject marks , calculate percentage and check condition if the user has
// 80 to 100 give a grade  then b and c respectively , and print them

// Next Assignment Take age from user for eg 25 , condition if 25 or greater then 25 then true
// check married if married then true and unmarried then untrue ,  take bolian data type;
// IF doing job then true if not then false 
// If atleast 1 fails then fail and print for that you are ineligible if eligible then say eligible; 


int main(){
	
	int option;
	int a;
	int b;
	
	cout<<"Welcome To My Calculator "<< "| This is A Menu Based Programme"<<endl;
	cout<<"1 = Add , 2 = Subtract , 3 = Devide , 4 = Multiply"<<endl;
	
	cout<<"Enter Your Option : "; cin>>option; cout<<endl;
	
	cout<<"Now Enter the Number the two numbers respectively that which you want to apply the condition : "<<endl; cin>>a>>b;
	
	
	if(option == 1) {
	
		cout<<"The addition Is : "<<a+b<<endl;
	
	}
	else if(option == 2){
		cout<<"The Subtraction Is : "<<a-b<<endl;
	}
	else if(option == 3){
		cout<<"The Division is : "<<a/b<<endl;
	}
	else if(option == 4){
		cout<<"The Multiplication Is  : "<<a*b<<endl;
		
	}
	else{
		cout<<"Wrong Input"<<endl;
	}
	
	
	
	
	
	
	return 0;
}
