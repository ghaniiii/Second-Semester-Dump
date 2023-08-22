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
			cout<<"The Value For The Class A pa1 is : "<<pa1<<endl;
			cout<<"The Value For The Class A pa2 is : "<<pa2;
		}
		
};

class B : private A{
	public:
		void getData(){
			cout<<"Enter The Value For The Variable pa1 : ";
			cin>>pa1;
			cout<<"Enter The Value For The Variable pa2 : ";
			cin>>pa2;
			
			cout<<endl;
			show();
		}
		
};

int main(){
	B obj;
	obj.getData();
	
	
	return 0;
}