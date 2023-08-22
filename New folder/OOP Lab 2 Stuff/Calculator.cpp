#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int First_number , Second_number;
	char Operation_sign ; string Choice = "yes";
	
	cout<<"Operation List :- "<<endl;
	cout<<"Addition = + "<<endl<<"Subtraction = - "<<endl;
	cout<<"Multiplication = * "<<endl<<"Division = / "<<endl<<endl;
	
	cout<<"_____________________________________\n\n\n";
	
	while(Choice == "yes"){
	
		cout<<"Enter the First Number : ";
		cin>>First_number; cout<<endl;
		
		cout<<"Enter the Second Number : ";
		cin>>Second_number; cout<<endl;
		
		
		cout<<"Enter the Operation Which You Want To Perform : ";
		cin>>Operation_sign; cout<<endl;
		
		if(Operation_sign == '+'){
			cout<<"Addition Of the Two Numbers Is : "<<First_number+Second_number<<endl;
		}
		else if(Operation_sign == '-'){
			cout<<"Subtraction Of the Two Numbers Is : "<<First_number-Second_number<<endl;
		}
		else if(Operation_sign == '/'){
			float floating_first_number = First_number;
			float division = floating_first_number/Second_number; 
			cout<<"Division Of the Two Numbers Is : "<<division<<endl;
		}
		else if(Operation_sign == '*'){
			cout<<"Multiplication Of the Two Numbers Is : "<<First_number*Second_number<<endl;
		}
		else{
			cout<<"Invalid Operator Try Again Using the Given List "<<endl;
		}
	
	cout<<endl;
	
	cout<<"Do You Want To Do Another Calculation ? yes/no : ";
	cin>>Choice; cout<<endl;
		
	}
		cout<<"_____________________________________\n\n"<<endl;
		cout<<"Thank You For Using Our Calculator \n\n";
		cout<<"_____________________________________";
	return 0;
}