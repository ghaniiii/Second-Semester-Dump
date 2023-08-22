#include<iostream>
#include<string.h>

using namespace std;


class A{
	public:
		virtual void show(){
			cout<<"Hi I Am Class A"<<endl;
		}
};

class B : public A{
	public:
		void show(){
			cout<<"Hi I Am Class B"<<endl;
		}
};

class C : public A{
	public:
		void show(){
			cout<<"Hi I Am Class C"<<endl;
		}
};

int main(){
	
	A objA;
	B objB;
	C objC;
	
	A *ptr;
	
	ptr = &objA;
	ptr->show();
	
	ptr = &objB;
	ptr->show();
	
	ptr = &objC;
	ptr->show();
	
	
	return 0;
}