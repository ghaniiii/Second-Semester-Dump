#include<iostream>
#include<string.h>

using namespace std;

class student{
	private:
		string name;
		int rollNo;
		char section;

	public:
		void display();
		int setRollNo(int x){
			rollNo = x;
		}
		string setName(string y){
			name = y;
		}
		char setSection(char z){
			section = z;
		}
};

void student::display(){
	cout<<"Roll-No : "<<rollNo<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Section : "<<section<<endl;
}

int main(){
	
	student ali;
	
	ali.setRollNo(5);
	ali.setName("Abdul Ghani Khan");
	ali.setSection('A');
	
	ali.display();

	
}
