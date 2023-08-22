#include<iostream>
#include<string.h>

using namespace std;


int main(){
	
	int array[5] = {1,2,3,4,5};
	
	int *ptr = array ;
	
	cout<<"Address Of Array Is : "<<ptr<<endl;
	cout<<"Value On First Index Is : "<<*ptr<<endl;
	ptr++;
	cout<<"Value On Second Index Is : "<<*ptr<<endl;
	ptr++;
	cout<<"Value On Third Index Is : "<<*ptr<<endl;
	ptr++;
	cout<<"Value On Fourth Index Is : "<<*ptr<<endl;
	ptr++;
	cout<<"Value On Fifth Index Is : "<<*ptr<<endl;
	
	

	return 0;
}
