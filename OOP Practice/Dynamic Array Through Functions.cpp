#include<iostream>
#include<string.h>

using namespace std;


int addToArray(int *&array,int size, int number){
	int *new_array = new int [size+1];
	
	for(int i=0;i<size;i++){
		new_array[i] = array[i];
	}
	
	new_array[size] = number;
	
	size++;
	
	delete[]array;
	
	array = new_array;
	
	return size;
}

int main(){
	
	static int size = 0;
	
	int *array = nullptr;
	int number;
	int counter = 0;
	
	do{
		cout<<"Add Into The Array : "<<endl;
		cin>>number;
		
		
		size = addToArray(array,size, number);
		
		
		cout<<endl<<endl;
		cout<<"Printing:-"<<endl;
		
		for(int i=0;i<size;i++){
			cout<<array[i]<<endl;
		}
		
		counter++;
	}
	while(counter != 10);
	
	
	return 0;
}

