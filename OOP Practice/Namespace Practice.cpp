#include<iostream>
#include<string.h>

using namespace std;

namespace first{
		int value = 500;
}
	
//Global variable

int value = 100;


int main(){
	
	//Local Variable
	int value = 200;
	
	//these variable can be accessed from
	// out the namespace using the scope 
	// operator
	
	cout<<first::value<<endl;	
	cout<<value<<endl;
	
	

	return 0;
	
}