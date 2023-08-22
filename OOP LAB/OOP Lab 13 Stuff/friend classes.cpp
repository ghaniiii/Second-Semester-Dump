#include<iostream>
#include<string.h>

using namespace std;

class A{
	private:
		int a, b;
	
	public:
		A(){
			a= 10;
			b = 20;
		}
		
	friend class B;
};

class B{
	public:
		void showA(A obj){
			cout<<"The Value Of A Is : "<<obj.a<<endl;
		}
		
		void showB(A obj){
			cout<<"The Value Of B Is : "<<obj.b<<endl;
		}
};


int main(){
	
	A x;
	B y;
	
	y.showA(x);
	y.showB(x);
}