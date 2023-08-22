#include<iostream>
#include<string.h>

using namespace std;

class DOB{
	int day;
	int month;
	int year;
	
	public:
		int getDay(){
			return day;
		}
		
		int getMonth(){
			return month;
		}
		
		int getYear(){
			return year;
		}
		
		void setDay(int day){
			this->day = day;
		}
		
		void setMonth(int month){
			this->month = month;
		}
		
		void setYear(int year){
			this->year = year;
		}
		
};


class Person{
	string name;
	DOB date;
	
	public:
//		Person(string name , int day , int month , int year){
//			this->name = name;
//			date.setDay(day);
//			date.setMonth(month);
//			date.setYear(year);
//		} 
//		
		void setData(int day , int month , int year){
			date.setDay(day);
			date.setMonth(month);
			date.setYear(year);
		} 
		
		string getName(){
			return name;
		}
		
		void setName(string name){
		    this->name = name;
		}
		
		string getData(){
			return 
			to_string(date.getDay()) + "/" +
			to_string(date.getMonth()) + "/" +
			to_string(date.getYear());
		}
};


int main(){
	
	Person p;
	p.setData(12,4,1999);
	p.setName("Abdul Ghani Khan");
	
	cout<<p.getName()<<endl;
	cout<<p.getData();
}

