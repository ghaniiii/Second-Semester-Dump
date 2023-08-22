#include<iostream>

using namespace std;

class A{
	public:
	void display(){
		cout<<"The Parent Class : "<<endl;
	}
};

class B : public A{
	public:
	void display(){
		cout<<"The Child Class"<<endl;
	}
};

int main(){
	B obj;
	obj.display();
}