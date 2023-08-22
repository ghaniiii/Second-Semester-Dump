#include<iostream>
#include<string.h>

using namespace std;

class Example{
	public:
		int data;
		
	Example(){
	}
		
	Example(int x){
		data = x;
	}
	
	void print(){
		cout<<"The Data is : "<<data<<endl;
	}
	
};

int main(){
	
	//normal constructor calling
	
	Example e1(20);
	
	//copy constructor // compiler will automatically copy
	 
	Example e2(e1);
	
	Example e2 = e1;
	
	//third method for this default constructor must be declear and defined
	
	e2 = e1;
	e1.print();
	e2.print();
	
	
	return 0;
}