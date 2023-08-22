#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int array[3] = {2,5,7};
	int*p = new int;
	
	p = array;
	cout << "initial address of pointer is " << p << endl << endl;
	
	cout<<*(p++)<<endl;
	cout<<p<<endl;
	cout<<*(p+2)<<endl<<endl;
	
	cout<<*(--p)<<endl;
	cout<<p<<endl;
	cout<<*p<<endl<<endl;
	
	*(p+1) = 9;
	
	cout<<*(p++)<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	delete p;
	
	
	return 0;
}