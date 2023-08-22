#include<iostream>
#include<string.h>

using namespace std;

struct Employee {
	int Id;
	char Name[25];
	int Age;
	long Salary;
};

void Display(Employee);

int main(){
	Employee Emp = {1,"Kashi",29,45000};
	
	Display(Emp); // Pass By Value
	
//	Display(&Emp); // Pass By Reference
	
}

void Display(Employee E /*   *E*/){
	cout<<"\nEmployee Id : "<<E.Id<<endl;
	cout<<"\nEmployee Name : "<<E.Name<<endl;
	cout<<"\nEmployee Age : "<<E.Age<<endl;
	cout<<"\nEmployee Salary : "<<E.Salary<<endl;
}