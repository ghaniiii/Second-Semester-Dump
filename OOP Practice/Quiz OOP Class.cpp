#include<iostream>

using namespace std;

struct Time{
	
	int day;
	int month;
	int year;
	
	void GiveDefaultValues(){
		day = 11;
		month = 3;
		year = 2023;
	}
	
	void DisplayTime(){
		cout<<"Day : "<<day<<endl;
		cout<<"Month : "<<month<<endl;
		cout<<"Year : "<<year<<endl<<endl<<endl;
	}
	
	void Check(){
		if(day > 30){
			day = day - 30;
			month++;
			
			if(month > 12){
				month = month -12;
				year++;
				
			}
		}
	}
};

int main(){
	
	int addedDays;
	
	Time T1;
	
	T1.GiveDefaultValues();
	cout<<"Current Is"<<endl;
	
	T1.DisplayTime();
	
	cout<<"Enter the Amount Of Days : ";
	cin>>addedDays;
	
	T1.day = T1.day + addedDays;
	
	T1.Check();
	
	T1.DisplayTime();
	
	
	
	
	
	
	
	return 0;
}