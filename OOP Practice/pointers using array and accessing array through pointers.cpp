#include<iostream>
#include<string.h>

using namespace std;

int function(int *pointer){
	
	cout<<*(pointer + 4);
	
}

int main(){
	
	int array[5] = {1,6,8,12,15};
	
	int *p ;
	p = &array[0];
	
	cout<<*(p+5)<<endl;
	
	int *c = new int;
	
	*c = 50;
	
	cout<<c<<endl;
	c++;
	cout<<c<<endl;
	c++;
	cout<<c<<endl;
	
	
	function(&array[0]);
	
	
	
	
	return 0;
}
