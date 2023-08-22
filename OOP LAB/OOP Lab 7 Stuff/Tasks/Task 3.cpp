#include<iostream>
#include<string.h>

using namespace std;

class Employees{
	
	private:
	
		int ID;
		string name;
		string jobTitle;
		int noOfHoursPerWeek;
	
	public:
		Employees(){
			ID = 0;
			name = "----";
			jobTitle = "----";
			noOfHoursPerWeek = 0;
		}
		
		
	int calcBaseSalary(){
		
		int Rate = 10;
		
		int Salary = 0;
		int Hours = noOfHoursPerWeek ;
		int Extra ;
		int Basic = 40;

		
		if(Hours > Basic){
			Extra = Hours - Basic;
		}
		
		
		Salary = (Hours - Extra) * Rate; 
		
		
		return Salary;
		
	}
	
	int calcOvertimeSalary(){
		

		int Rate = 10*2;
		
		int Salary = 0;
		
		if(noOfHoursPerWeek > 40){
			Salary = (noOfHoursPerWeek - 40) *Rate;
		}		
		
		return Salary;
	}
	
	void setID(int ID){
		this->ID = ID;
	}
	
	void setName(string Name){
		this->name = Name;
	}
	
	void setjobTitle(string jobTitle){
		this->jobTitle = jobTitle;
	}
	
	void setnoOfHours(int noOfHours){
		this->noOfHoursPerWeek = noOfHours;
	}
	
	string getName(){
		return name;
	}
	
	
	void display();
		
		
};

void Employees :: display(){

		cout<<"ID Of The Employee Is : "<<ID<<endl;
		cout<<"Name Of the Employee Is : "<<name<<endl;
		cout<<"Job Title Of the Employee Is : "<<jobTitle<<endl;
		cout<<"No Of Hours Worked By Employee Is : "<<noOfHoursPerWeek<<endl<<endl<<endl<<endl;
		
}


void setDetails(Employees *List , int noOfEmployees){
	

	
	
	for(int i=0;i<noOfEmployees;i++){
		
			int ID;
			string Name;
			string JobTitle;
			int noOfHours;
		
		cout<<"Adding Details For Employee : "<<i+1<<endl<<endl;
		
		cout<<"Enter the ID Of the Employee : ";
		cin>>ID;
		List[i].setID(ID);
		
		cout<<"Enter the Name Of the Employee : ";
		fflush(stdin);
		getline(cin ,Name);
		List[i].setName(Name);
		
		cout<<"Enter the Job Title Of the Employee : ";
		fflush(stdin);
		getline(cin ,JobTitle);
		List[i].setjobTitle(JobTitle);
		
		cout<<"Enter the Number Of Hours Worked : ";
		cin>>noOfHours;
		List[i].setnoOfHours(noOfHours);
		
		cout<<endl<<endl<<endl;
	}
	
	
}


void displayAllSalaries(Employees *Total , int noOfEmployees){
	for(int i=0;i<noOfEmployees;i++){
		cout<<"Employee : "<<i+1<<endl;
		cout<<Total[i].getName()<<endl;
		cout<<"Base Salary Is : "<<Total[i].calcBaseSalary()<<endl;
		cout<<"Over Time Salary Is : "<<Total[i].calcOvertimeSalary()<<endl;
		cout<<"Total Salary Is : "<<Total[i].calcBaseSalary()+Total[i].calcOvertimeSalary()<<endl<<endl<<endl<<endl;
	}
}

void displayDetails(Employees *List , int size){
	for(int i = 0; i<size; i++){
		
		List[i].display();
		
	}
}


int main(){
	
	int noOfEmployees;
	char yesno;
	int option;
	
	cout<<"Enter the Number Of Employees : ";
	cin>>noOfEmployees;
	
	
	
	Employees Total[noOfEmployees];
	
	do{
		
		cout<<" _____________________________________________"<<endl;
		cout<<"|                                             |"<<endl;
		cout<<"|          1.Set Employee Details             |"<<endl;
		cout<<"|            2.Display Salaries               |"<<endl;
		cout<<"|       3.Display Employee Full Data          |"<<endl;
		cout<<"|_____________________________________________|"<<endl<<endl;
		
		cout<<"Enter Your Opeion : ";
		cin>>option;
		
		
		if(option == 1){
			
			setDetails( Total ,noOfEmployees);
			
			cout<<"You Have Successfully Added The Employees ."<<endl<<endl<<endl;
			
		}
		
		else if(option == 2){
			
			cout<<"The Salaries Of the Employees Entered Are :-"<<endl<<endl;
		
			displayAllSalaries( Total , noOfEmployees);
		
		}
		
		else if(option == 3){
		
			displayDetails(Total , noOfEmployees);
			
		}
		else {
			cout<<"Wrong Input"<<endl;
		}
		
			cout<<"Do You Want To Access The Menu Again ? : y/n : ";
			cin>>yesno;
	
	}
	while(yesno == 'y');
	
	
	
}