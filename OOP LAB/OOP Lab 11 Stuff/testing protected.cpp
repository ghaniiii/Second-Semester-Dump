#include<iostream>
#include<string.h>

using namespace std;

class A{
	protected:
		int pa1;
		int pa2;
		
		
	public:
		void show(){
			cout<<"pa1 Value Is : "<<pa1<<endl;
			cout<<"pa2 Value Is : "<<pa2<<endl;
		}
};

class B : protected A {
	public:
		void fun(){
			cout<<"Enter The Value In pa1 : ";
			cin>>pa1;
			
			cout<<"Enter THe Value In pa2 : ";
			cin>>pa2;
			
			cout<<endl;
			show();
		}
};


int main(){
	
	B obj;
	
	obj.fun();
	
	
	
	return 0;
}

