#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		int rollNumber;
		
	public:
		Student(){
			cout<<"Default Constructor Called"<<endl;
		}
		Student(Student &obj){
			setRollNumber(obj.rollNumber);
			cout<<"Copy Constructor Called"<<endl;
		}
		void setRollNumber(int rollNumber){
			this->rollNumber = rollNumber; 	
		}
		int getRollNumber(){
			return rollNumber;
		}
		
};

int main(){
	
	Student Ali;
	Ali.setRollNumber(55);
	
	Student Abid(Ali);
	
	cout<<Abid.getRollNumber();
	
	
	return 0;
}