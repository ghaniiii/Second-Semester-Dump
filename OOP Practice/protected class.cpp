#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		int rollNumber;
		string name;
		char section;
		
	public:
		Student(int rollNumber , string name , char section){
			this->rollNumber=rollNumber;
			this->name=name;
			this->section=section;
		}
		
		int getRollNumber(){
			return rollNumber;
		}
		string getName(){
			return name;
		}
		char getSection(){
			return section;
		}
		void setRollNumber(int RollNumber){
			rollNumber = RollNumber;
		}
		void setName(string name){
			this->name = name;
		}
		void setSection(char section){
			this->section=section;
		}
		
		void display(){
			cout<<"The Name Of the Student Is : "<<name<<endl;
			cout<<"The Section Of the Student Is : "<<section<<endl;
			cout<<"The Roll Number Of the Student Is : "<<rollNumber<<endl;
		}
		
};

int main(){
	
	Student S1 = {1,"Abdul Ghani Khan",'A'};
	S1.display();
	
	
	
	return 0;
}