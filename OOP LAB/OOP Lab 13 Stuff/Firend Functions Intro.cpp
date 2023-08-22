#include<iostream>
#include<string.h>

using namespace std;

//Friend Function

//Friend function are used to access the private data members of another class;
//friend key word
// declare inside the class during calling a function...

class B;

class A{
	private:
		int a;
		
	public:
		A(){
			a = 10;
		}
		
		friend void show(A,B);
};

class B{
	private:
		int b;
		
	public:
		B(){
			b = 20;
		}
		
		friend void show(A,B);
};

void show(A x , B y){
	int r;
	
	r= x.a + y.b;
	
	cout<<"The Value Of The Object A : "<<x.a<<endl;
	cout<<"The Value Of The Object B : "<<y.b<<endl;
	
	cout<<"The Value Of All Values  : r : "<<r<<endl;
}


int main(){
	A obj1;
	B obj2;
	
	show(obj1 , obj2);
}