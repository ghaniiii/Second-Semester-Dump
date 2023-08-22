#include<iostream>
#include<string.h>

using namespace std;

class student{
	protected:
		string name;
		int marks; 
		
	public:
		student(string name , int marks){
			this->name = name;
			this->marks = marks;
		}
};

class teacher {
	protected:
		string name;
		int salary;
		
	public:
		teacher(string tname , int salary ) {
			this->name = tname;
			this->salary = salary;
		}
		
};

class Ta : protected student , protected teacher {
	public:
		Ta(string tname , int salary , string sname , int marks) : student(sname , marks) , teacher(tname , salary){
			
		}
		
		void display(){
			
			cout<<"The Name OF the Teacher Is : "<<teacher::name<<endl;
			cout<<"The Salary Of The Teache Is : "<<teacher::salary<<endl;
			
			cout<<endl<<endl;
			
			cout<<"The Name Of The Student Is : "<<student::name<<endl;
			cout<<"The Marks Of The Student Are : "<<student::marks<<endl;
		}
};

int main(){
	
	Ta taa("Mazhar Iqbal" , 50000 , "Abdul Ghani Khan" , 100);
	taa.display();
	
	
	
	return 0;
}