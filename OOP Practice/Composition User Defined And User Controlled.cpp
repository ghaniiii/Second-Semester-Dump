#include<iostream>
#include<string.h>

using namespace std;

class A{
	private:
		int y;
		int x;	
	public:
		
		A(int a, int b) { x = a ; y = b;  } 
		void print(){
			cout<<"x = "<<x<<"\ty = "<<y<<endl;
		}
};

class B{
	private:
		int z;
	public:
		A objA;
		B(int a , int b , int c) : objA(a,b)  { z = c; }
		void print(){
			objA.print();
			cout<<"z = "<<z<<endl;
		}
		
};

int main(){
	B objB(3,4,5);
	objB.print();
	objB.objA.print();
}