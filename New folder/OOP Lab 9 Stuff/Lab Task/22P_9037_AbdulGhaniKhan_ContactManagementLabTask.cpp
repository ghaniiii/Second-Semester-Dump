#include<iostream>
#include<string.h>

using namespace std;

class dateOfBirth{
	private:
		int day;
		int month;
		int year;
		
	public:
		dateOfBirth(){
			day = 0;
			month = 0;
			year = 0;		
		}
		void setDay(int day){
			this->day = day;
		}
		void setMonth(int month){
			this->month = month;
		}
		void setYear(int year){
			this->year = year;
		}
		int getDay(){
			return day;
		}
		
		int getMonth(){
			return month;
		}
		
		int getYear(){
			return year;
		}
		
		string getDOB(){
			return 
			to_string(getDay()) + "/" +
			to_string(getMonth()) + "/" +
			to_string(getYear());
		}
};


class Contact{
	private:
		string name;
		string phNumber;
		string email;
		dateOfBirth DOB;
		
	public:
		Contact(){
			name = "----";
			phNumber = "----";
			email = "----";
		}
		
		void setName(string name ){
			this->name = name;
		}
		
		void setPhNumber(string phNumber){
			this->phNumber = phNumber;
		}
		
		void setEmail(string email){
			this->email = email;
		}
		
		void setDOB(int day, int month , int year){
			DOB.setDay(day);
			DOB.setMonth(month);
			DOB.setYear(year);
		}
		
		string getName(){
			return name;
		}
		
		string getphNumber(){
			return phNumber;
		}
		
		string getEmail(){
			return email;
		}
		
		int getBirthMonth(){
			return DOB.getMonth();
		}
		
		void printContactDetails(){
			cout<<"  Name : "<<getName()<<endl;
			cout<<"  Phone No : "<<getphNumber()<<endl;
			cout<<"  Email : "<<getEmail()<<endl;
			cout<<"  Date Of Birth : "<<DOB.getDOB()<<endl<<endl<<endl;
		}
		
};

class contactBookList{
	private:
		int sizeOfContacts;
		Contact *List;
		
	public:
		contactBookList(){
			sizeOfContacts = 0;
			List = new Contact[sizeOfContacts];
		}
		
		void addContact(string name , string phNumber , string email , int day , int month , int year){
			
			
			
			Contact *newArray = new Contact[sizeOfContacts + 1]; 
			
			for(int i = 0 ; i<sizeOfContacts ; i++){
				newArray[i] = List[i];
			}
			
			
			newArray[sizeOfContacts].setName(name);
			newArray[sizeOfContacts].setPhNumber(phNumber);
			newArray[sizeOfContacts].setEmail(email);
			newArray[sizeOfContacts].setDOB(day , month , year);
			
			sizeOfContacts++;
			
			delete []List;
			
			List = newArray;	
			
			//delete []newArray;
		}
		
		void printContacts(){
			if(sizeOfContacts>0){
				for(int i = 0;i<sizeOfContacts ; i++){
					List[i].printContactDetails();
				}
			}
			else{
				cout<<endl<<endl;
				cout<<"                  _________________________________"<<endl;
				cout<<"                 |                                 |"<<endl;
				cout<<"                 |  No Contacts Entered Till Now   |"<<endl;
				cout<<"                 |_________________________________|"<<endl<<endl;
			}
			
		}
		
		void birthdaysInSpecificMonth(int number){
			
			cout<<endl<<endl;
			cout<<" Contacts With Birthdays In Month "<<number<<" are :-"<<endl<<endl;
			int count = 0;
			
			for(int i=0;i<sizeOfContacts ; i++){
				if(number == List[i].getBirthMonth()){
					cout<<" "<<List[i].getName()<<endl;
					count++;
				}
			}
				
			if(count == 0){
				cout<<endl<<endl;
				cout<<"             __________________________________________"<<endl;
				cout<<"            |                                          |"<<endl;
				cout<<"            |   No Person Found With Same Birth Month  |"<<endl;
				cout<<"            |__________________________________________|"<<endl<<endl;
			}
					
				
			
		}
};



int main(){
	
	contactBookList BookManager;
	int option;
	string name;
	string phNumber;
	string email;
	int day;
	int month;
	int year;
	char yesno;
	
	cout<<"           _________________________________________________"<<endl;
	cout<<"          |                                                 |"<<endl;
	cout<<"          |  Welcome To Our Software That Manages Contacts  |"<<endl;
	cout<<"          |_________________________________________________|"<<endl;
	cout<<endl<<endl;
	
	do{
		
		cout<<"  __________________________________________________________________"<<endl;
		cout<<" |                                                                  |"<<endl;
		cout<<" |                      1. Enter New Contact                        |"<<endl;
		cout<<" |                     2. Print All Contacts                        |"<<endl;
		cout<<" |      3. Check Contacts That Have Birthday In Specific Month      |"<<endl;
        cout<<" |                             4.Exit                               |"<<endl;
		cout<<" |__________________________________________________________________|"<<endl<<endl;
		cout<<"                      Choose Your Option : ";
		cin>>option;
		
		cout<<" ___________________________________________________________________"<<endl<<endl<<endl;
		
		if(option == 1){
			cout<<"             Enter the Name Of the Contact : ";
			fflush(stdin);
			getline(cin , name);
			
			cout<<"             Enter Phone Number Of the Contact : ";
			fflush(stdin);
			getline(cin , phNumber);
			
			if(phNumber.size() == 11 ){
				
			
				cout<<"             Enter Email Of the Contact : ";
				fflush(stdin);
				getline(cin , email);
				
				cout<<endl;
				
				cout<<"             Now Enter Date Of Birth :-"<<endl<<endl;
				cout<<"             Enter Day : ";
				cin>>day;
				
				if(day <= 31){
				
					cout<<"             Enter Month : ";
					cin>>month;
					
					if(month <= 12){
					
						cout<<"             Enter Year : ";
						cin>>year;
						
						if(year <= 2023){
							BookManager.addContact(name , phNumber , email ,day , month ,year);
						}
						else{
							cout<<"    Current Year Is 2023 So DOB Should Be Less Then Or Equal To 2023"<<endl;
						}
						
					}
					else{
						cout<<"             Month Is Never Greater Then 12"<<endl;
					}
					
				}
				else{
					cout<<"             Day Is Never Greater Then 31"<<endl;
				}
			
			}
			else{
				cout<<"             Phone Number Length Should Be Exactly 11 Numbers "<<endl;
			}
			cout<<endl<<endl;
			

			
		}
		else if(option == 2){
			
			BookManager.printContacts();
			
		}
		else if(option == 3){
			cout<<" Enter the Number Of Month That You Want "<<endl;
			cout<<" To Check Whose Birthday Lies In That Month 1-12 : ";
			cin>>month;
			
			BookManager.birthdaysInSpecificMonth(month);
		}
		else if(option == 4){
			break;
		}
		else{
			cout<<"                          Wrong Input"<<endl;
		}
		
		cout<<endl<<endl<<endl<<" ___________________________________________________________________"<<endl<<endl;
		cout<<"           Do You Want To Access The Menu Again ? y/n : ";
		cin>>yesno;
		cout<<endl<<" ___________________________________________________________________"<<endl<<endl<<endl;
	}
	while(yesno == 'y' || yesno == 'Y');
	
	
	cout<<endl<<endl<<endl;
	
		cout<<"                  __________________________________"<<endl;
		cout<<"                 |                                  |"<<endl;
		cout<<"                 |   CREATED BY ABDUL GHANI KHAN    |"<<endl;
		cout<<"                 |   ---------------------------    |"<<endl;
		cout<<"                 |   SECTION 2A   |   BS-CS 2022    |"<<endl;
		cout<<"                 |__________________________________|"<<endl;
}

