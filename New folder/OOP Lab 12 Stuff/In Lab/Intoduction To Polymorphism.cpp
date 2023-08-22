#include<iostream>
#include<string.h>

using namespace std;

class Test{
	private:
		
		int n;
		
	public:
		void in(){
			cout<<"Enter The Value Of n : ";
			cin>>n;
		}
		
		void out(){
			cout<<"The Value Of n  Is : "<<n<<endl;
		}	
};

int main(){
	
//	Test ObjTest;
//	
//	ObjTest.in();
//	ObjTest.out();

	Test *ptr;
	
	ptr = new Test;
	
	
	ptr->in();
	ptr->out();
	
}