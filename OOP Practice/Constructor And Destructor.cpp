#include<iostream>

using namespace std;

class Student{
	
	private:
	
	public:
				// welcome welcome exitingtest goodbye welcome exitingtest goodbye exitingmain goodbye
	
	Student(){
		cout<<"Welcome\n";
	}
	~Student(){
		cout<<"Good Bye\n";
	}
	
};

void test(){
	Student mahad;
	cout<<"Exiting Test()\n";
}

int main(){
	Student ali;
	test();
	test();
	cout<<"Exiting Main()\n";
}