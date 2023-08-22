#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int *x  = new int[3];
	
	*x = 1;
	
	cout<<"\n&x = "<<&x<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"*x = "<<*x<<endl;
	
	int *array = new int ;
	
	for(int i=0;i<10;i++){
		cout<<"Enter Value For Indexes Of the Array : ";
		cin>>array[i];
	}
	
	
	return 0;
}
