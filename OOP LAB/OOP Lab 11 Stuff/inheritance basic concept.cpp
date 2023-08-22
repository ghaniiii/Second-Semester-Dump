#include<iostream>
#include<string.h>

using namespace std;

class A{
	private:
		int a1, a2;
		
	protected:
		
		int pa1 , pa2;
		
	public:
		
		void show(){
			cout<<"The Values Of Class A pa1 : "<<pa1<<endl;
			cout<<"The Values Of Class A pa2 : "<<pa2<<endl;
		}
		
};

class B : public A{
	public:
		
		void getData(){
			cout<<"Enter The Value For Variable pa1 : ";
			cin>>pa1;
			
			cout<<"Enter The Value For Variable pa2 : ";
			cin>>pa2;
		}
};

int main(){
	
	B obj;
	
	obj.getData();
	cout<<endl;
	obj.show();
	
	
	return 0;
}