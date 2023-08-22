#include<iostream>
#include<string.h>

using namespace std;


int main(){
	
	int *pointer1;
	
	int x[5] = {1,22,33,44,55};
	
	pointer1 = &x[0];
	
	cout<<*pointer1<<endl;
	
	cout<<*(pointer1+1)<<endl;
	
	cout<<(*pointer1)+4<<endl;
	
	(*pointer1) = 55;
	
	cout<<(*pointer1)+4<<endl;
	
	int *pointer2;
	
	
	pointer2 = pointer1;
	
	cout<<(*pointer2)<<endl;
	cout<<*(pointer2-1)<<endl;
	
	
	
	
	
	return 0;
}