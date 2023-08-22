#include<iostream>

using namespace std;


class Student{
	private:
		int rollNo;
		string name;
		char section;
		int grade[5];
		
	public:
		void setrollNo(int rollNo){
			this->rollNo=rollNo;
		}
		void setName(string name){
			this->name=name;
		}
		void setSection(char section){
			this->section=section;
		}
		void setGrade(int Grade , int indexNumber){
			this->grade[indexNumber]=Grade;
		}
		
		
		
};

int main(){
	
	
	Student Stds[5];
	
	Stds[0].setGrade(55,5);
	
	
	return 0;
}