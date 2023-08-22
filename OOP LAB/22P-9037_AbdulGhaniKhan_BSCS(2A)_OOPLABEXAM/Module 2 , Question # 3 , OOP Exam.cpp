#include<iostream>
#include<string.h>

using namespace std;


// declaring the static int as globally
static int number = 10;

// structure declaration.
struct MyDetails{
	public:
		
		string name = "Abdul Ghani Khan";
		string Number = "03489656043";
		string RollNumber = "22P-9037";
		
		
		// use of a member function of the class MyDetails to print my basic details.
		void printData(){
			
			int *pointer  = &number;
			
			
			cout<<"My Lucky Number Is : "<<*pointer<<endl;
			cout<<"My Name Is : "<<name<<endl;
			cout<<"My Number Is : "<<RollNumber<<endl;
			cout<<"My Roll Number Is : "<<RollNumber<<endl;
		}
		
};

// Use of simple function to print a line.
void printHI(){
	cout<<"Hi Ill Be Sharing My Details With You :-"<<endl<<endl;;
}

int main(){
	
	// making a pointer and storing the address of the static int in it and later printing it 
	int *pointer = &number;
	
	
	printHI();
	MyDetails A;
	A.printData();
}