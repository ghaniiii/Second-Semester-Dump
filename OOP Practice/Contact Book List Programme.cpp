#include<iostream>
#include<string.h>

using namespace std;

class Details{
	string name;
	string rollNumber;
	string phNumber;
	
	public:
		Details(){
			name = "----";
			rollNumber = "----";
			phNumber = "----";
		}
		void printAllDetails(){
			cout<<name<<endl;
			cout<<rollNumber<<endl;
			cout<<phNumber<<endl<<endl<<endl;
		}
		
		void AddDetails(string name , string rollNumber , string phNumber){
			this->name = name;
			this->rollNumber = rollNumber;
			this->phNumber = phNumber;
		}
};


class Contacts{
	int size;
	Details *List;
	
	public:
		Contacts(int size = 0){
			List = new Details [size];
		}
		
		void AddNewContact(string name , string rollNumber , string phNumber){
			Details *newList = new Details [size+1];
			
			for(int i=0;i<size;i++){
				newList[i] = List[i];
			}
			
			newList[size].AddDetails(name , rollNumber , phNumber);
			
			delete [] List;
			size++;
			
			List = newList;
			
			
		}
		
		void printAllContacts(){
			for(int i=0;i<size;i++){
				List[i].printAllDetails();
			}
		}
		
};


int main(){
	Contacts BookList;
	int option;
	string name;
	string rollNumber;
	string phNumber;
	char option2;
	

	
	do{
		
   		cout<<"1. To Add A Contact"<<endl;
		cout<<"2. To Print All Contacts"<<endl;
		cin>>option;
	
		if(option == 1){
			cout<<"Enter the Name Of the New Contact : ";
			fflush(stdin);
			getline(cin , name);
			
			cout<<"Enter the RollNumber Of the New Contact : ";
			fflush(stdin);
			getline(cin , rollNumber);
			
			cout<<"Enter the phNumber Of The New Contact : ";
			fflush(stdin);
			getline(cin , phNumber);
			
			BookList.AddNewContact(name , rollNumber , phNumber);
		}
		else if(option == 2){
			BookList.printAllContacts();
		}
		else {
			cout<<"Wrong Input"<<endl;
		}
		
		cout<<endl<<endl;
		cout<<"Do You Want To Access The Menu Again ? : y/n : ";
		cin>>option2;
		
		cout<<endl<<endl;
	 }
	 while(option2 == 'y' || option2 == 'Y');
}