#include<iostream>

using namespace std;

void setTime(int hours , int minutes ,int seconds);

class Time{
	
	private:
		int Hours;
		int Minutes;
		int Seconds;
		
	public:
		Time(int hours = 0,int minutes = 0,int seconds = 0){
			setTime(hours,minutes,seconds);
		}	
		
		void setTime(int hours , int minutes ,int seconds){
			this->Hours = hours;
			this->Minutes = minutes;
			this->Seconds = seconds;
		}
		
		void display(){
			cout<<Hours<<", "<<Minutes<<", "<<Seconds<<endl;
		}
	
};


int main(){
	
	Time Employees[50];
	int hours , minutes, seconds ; char yesno;
	int studentNumber;
	
	
		do{

			cout<<"Enter the Student Number (1-50)"<<endl;
			cin>>studentNumber;
		
			cout<<"Enter the Hours Of the  Student : "<<studentNumber<<endl;
			cin>>hours;
			cout<<"Enter the Minutes Of the Student : "<<studentNumber<<endl;
			cin>>minutes;
			cout<<"Enter the Seconds Of the Student : "<<studentNumber<<endl;
			cin>>seconds;
			
			Employees[studentNumber-1].setTime(hours,minutes,seconds);
			
			cout<<"Time Set For Student"<<studentNumber<<endl<<endl<<endl;
			
			cout<<"___________________________________________"<<endl<<endl;
		
			cout<<"Do You Want To Set Another Student Timing : ";
			cin>>yesno;
		
		}
		while(yesno == 'y');
	
	
	cout<<"Now Check Students Times"<<endl;
	
		
		do{
			cout<<"Enter the Student Number (1-50)"<<endl;
			cin>>studentNumber;
			
			Employees[studentNumber-1].display();
			
			
			cout<<"Time Shown For Student"<<studentNumber<<endl<<endl<<endl;
			
			cout<<"___________________________________________"<<endl<<endl;
		
		cout<<"Do You Want To Set Another Student Timing : ";
		cin>>yesno;
		
		
			}while(yesno == 'y');
	
	
		
	return 0;
}