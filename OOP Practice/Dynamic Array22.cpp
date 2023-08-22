#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int size = 5;
	
	int *array = new int [size];
	
	for(int i =0;i<size;i++){
		array[i] = i ;
	}
	
	int *newArray = new int [size+1];
	
	for(int i=0;i<size;i++){  
		newArray[i] = array[i];
	}
	
	newArray[size] = 5;
	
	delete[] array;
	
	size++;
	
	array = newArray;
	
	for(int i=0;i<size;i++){
		cout<<array[i]<<endl;
	}
}