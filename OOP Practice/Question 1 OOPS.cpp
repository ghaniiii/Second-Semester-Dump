#include<iostream>

using namespace std;

class Student{
	
	string name;
	int rollNumber;
	string address;
	string phNumber;
	
	
	public:
		void setName(string name){
			this->name = name;
		}
		
		void setrollNumber(int rollNumber){
			this->rollNumber=rollNumber;
		}
		
		void setaddress(string address){
			this->address=address;
		}
		
		void setphNumber(string phNumber){
			this->phNumber=phNumber;
		}
		
		void Display(){
			cout<<"The Name Is : "<<name<<endl;
			cout<<"The Roll Number Is : "<<rollNumber<<endl;
			cout<<"The Address Is : "<<address<<endl;
			cout<<"The Phone Number Is : "<<phNumber<<endl;
		}
	
	
};

int main(){
	
	Student S1;
	
	string input;
	cout<<"Enter The Name Of the Student 1 : ";
	cin>>input;
	
	S1.setName(input);
	
	int input2;
	cout<<"Enter the Roll Number Of the Student 1 : ";
	cin>>input2;
	
	S1.setrollNumber(input2);
	
	cout<<"Enter the Address Of the Student 1 : ";
	cin>>input;
	
	S1.setaddress(input);
	
	cout<<"Enter the Phone Number Of the Student 1 : ";
	cin>>input;
	
	S1.setphNumber(input);
	
	S1.Display();
	
	
	
	
	
	
}