#include<iostream>
#include<string.h>

using namespace std;


//keyword //structure name
struct employee{
	string name;
	double workedHour;
	double salary;   //structure members
	
	
	
	void display(){
		cout<<"Employee Name : "<<name<<endl;
		cout<<"Employee Worked Hours : "<<workedHour<<endl;
		cout<<"Employee Salary : "<<salary<<endl;
	}
};

struct student{
	int id;
	int testScores[3];
	int finalExam; // structure members

	void display(){
		cout<<"ID of Student : "<<id<<endl;
		cout<<"Test Scores Of the Student Are : \n";
		for(int i=0;i<3;i++){
			cout<<"-->"<<testScores[i]<<endl;
		}
		cout<<"Final Exam : "<<finalExam<<endl;
	}
};


int main(){
	
//	employee e1, e2;
//	
//	//for variable /object 1
//	
//	e1.name = "Imran";
//	e1.workedHour = 50;
//	e1.salary = e1.workedHour * 50;
//	
//	
//	//for variable /object 2
//	
//	e2.name = "Fazal Ur Rehman";
//	e2.workedHour = 02;
//	e2.salary = e2.workedHour * 100;
//	
//	e1.display();
//
//	cout<<"____________________________\n\n";
//	
//	e2.display();
	
	student s1,s2;
	
	s1.id = 22;
	s1.testScores[0] = 55;
	s1.testScores[1] = 66;
	s1.testScores[2] = 99;
	s1.finalExam = 100;
	
	s1.display();
	
}