#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		int rollNo;
	public:
		Student(int rollNo = 0){
			setRollNo(rollNo);
		}
		
		void setRollNo(int rollNo){
			this->rollNo = rollNo;
		}
		
		int getRollNo(){
			return rollNo;
		}
};

int main(){
	
	Student *pointer1 = new Student(1);
	cout<<"Roll No : "<<pointer1->getRollNo()<<endl;
	cout<<"Roll No : "<<(*pointer1).getRollNo()<<endl;    // Explicit Deferencing That 
														  // Goes to the address of the pointer and then access that value which is at the address
														  // And then calls that function through . operator tho we cant directely access the function
														  // directly in pointers we do it with arrow keyword ; 
	
	
	return 0;
}