#include<iostream>
#include<string.h>
#include<cmath>

// Homw Work : Use the function from the given slides whichover are our favourites 10 to 15 functions and 
// make a useful programme ,  be able to understand and discuss on it.

using namespace std;

int main(){
	
	int number = 123;
	int update3 = number%100; //23
	int devide = number/100;   //1
	
	int update2 = update3%10; //3
	int devide2 = update3/10; //2
	 
	int result = update2*100 + devide2*10 + devide;
	
	cout<<"The Reverse Of the Number Is : "<<result<<endl;
	
	
	cout<<"________________________________"<<endl<<endl;
	
	
	string first_name = "Abdul Ghani ";
	string last_name = "Khan";
	string full_name = first_name + last_name;
	
	cout<<"The Full Name is : "<<full_name<<endl;
	
	
	cout<<"________________________________"<<endl<<endl;
	
	
	string letters = "ASSSADASDASKDJASGDBDASDKJBASD";
	
	cout<<"The Size Of The String Named Letters Is : "<<letters.length()<<endl; // also can use .size()
	
	for(int i=0;i<letters.size();i++){
		if(letters[i] == 'J'){
			letters[i] = 'x';
		}
	}

	cout<<"The Changed String Letter By Changing j to x is : "<<letters<<endl<<endl;
	
	
	cout<<"________________________________"<<endl<<endl;
	
	
	string firstname;
	string lastname;
	
	cout<<"Enter Your First Name : "<<endl; getline(cin,firstname); cout<<endl;
	cout<<"Enter Your Last Name : "<<endl; getline(cin,lastname);cout<<endl;
	
	cout<<"The concatinaion of the frist and last name is : "<<firstname+lastname<<endl<<endl;
	
	cout<<"________________________________"<<endl<<endl;
	

	
	
		
	
	
	
	return 0;
}