#include<iostream>
#include<string.h>

using namespace std;

class Employee{
	private:
		string empName;
		int empNumber;
		
	public:
		Employee(string name, int number);
		void putData(string name , int number);
		void getData();
		
};

Employee::Employee(string name , int number ) : empName(name) , empNumber(number){}
void Employee::putData(string name , int number){
	empName = name;
	empNumber = number;
}
void Employee::getData(){
			
						cout<<"Name Extracted  : "<<empName<<endl;
						cout<<"Employee Number Extracted : "<<empNumber<<endl;

		}
 
class Manager : public Employee{
	private:
		char title;
		double clubdues;
		
	public:
		Manager(string name , int num , char title , double clubdues) : Employee(name , num) , title(title) , clubdues(clubdues) {}
		void getData(){
			
			cout<<"Manager :-"<<endl<<endl;
			
						Employee::getData();
						cout<<"Title Extracted : "<<title<<endl;
						cout<<"Club Dues Extracted : "<<clubdues<<endl;
		}		
		
		void putData(char title , double clubdues , string name , int number){
			this->title = title;
			this->clubdues = clubdues;
			Employee::putData(name , number);
		}
};

class Scientist : public Employee{
	private:
		int publications;
		
	public:
		Scientist(string name , int number , int publications) : Employee(name , number) , publications(publications){}
		void getData(){
			
			cout<<"Scientist :- "<<endl<<endl;
						Employee::getData();
						cout<<"Publications Extracted : "<<publications<<endl;
		}	
		
		void putData(int publications , string name , int number){
			this->publications = publications;
			Employee::putData(name , number);
		}
};

class Programmer : public Employee{
	private:
		double salary;
		string expertise;
		
	public:
		Programmer(string name , int number , double salary , string expertise) : Employee(name , number) , salary(salary) , expertise(expertise){}
		
		void getData(){
			
			cout<<"Programmer :-"<<endl<<endl;
						Employee::getData();
						cout<<"Salary Extracted : "<<salary<<endl;
						cout<<"Expertise Extracted : "<<expertise<<endl;
					
		}	
		
		void putData(double salary , string expertise , string name , int number){
			this->salary = salary;
			this->expertise = expertise;
			Employee::putData(name , number);
		}
};
 
 
int main(){
	Programmer P("Abdul Ghani Khan",1,25000,"Expert In C Programming");
	Scientist S("Mazhar Iqbal",2,50000);
	Manager M("Uzair Ahmad",3,'S',100000);
	
	P.getData();
	
	cout<<endl<<endl<<endl;
	
	S.getData();
	
	cout<<endl<<endl<<endl;
	
	M.getData();
}

