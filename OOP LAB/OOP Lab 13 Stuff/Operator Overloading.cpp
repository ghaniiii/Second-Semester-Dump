#include<iostream>
#include<string.h>

using namespace std;

//Operator Overloading

//The Process of Defining additional operator

//It enables an operator to perform different operations

// It Enables an operator to perform
// different operations

// An operator can be overloaded by declaring 
// a special member function inside the class

//It must have return_type and operator keyword op++, --(){}

class count{
	private:
		int n;
		
	public:
		count(){
			n = 0;
		}
		
		void show(){
			cout<<"The Value Of n Is : "<<n<<endl;
		}
		
		void operator ++(){
			n = n+1;
		}
		
		void operator --(){
			n = n-1;
		}
};

int main(){
	
	count obj;
	obj.show();
	
	++obj;
	obj.show();
	
	--obj;
	obj.show();
	
}