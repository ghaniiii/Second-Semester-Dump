#include<iostream>

#include<string.h>

using namespace std;

template<class STRING , class INT>

class Array{
	
	public:
		
		int sizeOfINTArray;
		int sizeOfFLOATArray;
		
		STRING *array = new STRING[sizeOfINTArray];
		
		INT *array2 = new INT[sizeOfFLOATArray];
	
		
		
		
	
};


int main(){
	
	Array<string , int> A;
	
	A.sizeOfINTArray = 5;
	A.sizeOfFLOATArray = 5;
	
	A.array[0] = "Abdul Ghani Khan";
	A.array2[0] = 50;
	
	
	cout<<A.array[0]<<endl;
	cout<<A.array2[0]<<endl;
	
	Array<int  , float > B;
	
	B.sizeOfINTArray = 5;
	B.sizeOfFLOATArray = 5;
	
	B.array[0] = 1;
	B.array2[0] = 1.5;
	
	cout<<B.array[0]<<endl;
	cout<<B.array2[0]<<endl;
	
	
	
	
	
	return 0;
}