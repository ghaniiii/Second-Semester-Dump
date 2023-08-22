#include<iostream>
#include<string.h>

using namespace std;

class Person{
	string name;
	int age;
	
	public:
		Person(string name , int age){
			this->name = name;
			this->age = age;
		}
		
		string getName(){
			return name;
		}
		
		int getAge(){
			return age;
		}
		
};

class Student : public Person {
	float gpa;
	public:
		Student(string name , int age , float gpa) : Person(name , age){
			this->gpa = gpa;
		}
		
		void display(){
			cout<<getName()<<" "<<getAge()<<" "<<gpa<<" "<<endl;
		}
};


class Employee : public Person {
	int salary;
	public:
		Employee(string name  , int age , int salary) : Person(name , age){
			this->salary = salary;
		}
		
		void display(){
			cout<<getName()<<" "<<getAge()<<" "<<salary<<" "<<endl;
		}
};

int main(){
	Student S1("Abdul Ghani Khan", 19 , 3.6);
	S1.display();
	
	cout<<endl<<endl;
	
	Employee E1("Sir Mazhar Iqbal", 25 , 500000);
	E1.display();
}