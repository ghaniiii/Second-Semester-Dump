#include<iostream>
#include<string.h>

using namespace std;

class DynamicArray{
	private:
		int *arr;
		int arrSize;
		
	public:
		DynamicArray(int size){
			arrSize = size;
			arr = new int [size];
		}
		
		//copy constructor 
		DynamicArray(DynamicArray &d){
			arr = new int [d.getSize()];
			arrSize = d.getSize();
			
			for(int i=0;i<d.getSize();i++){
				arr[i] = d.arr[i];
			}
		}
		
		int getSize(){
			return arrSize;
		}
		
		void print(){
			for(int i=0; i<arrSize ; i++){
				cout<<arr[i]<<" "<<endl;
			}
		}
		
		//setter methood
		void setValue(int index, int value){
			arr[index] = value;
		}
		
		int getValue(int index){
			return arr[index];
		}
		
		~DynamicArray(){
			cout<<"Destructor Calling : "<<endl;
			delete[]arr;
			
			//for one by one'
//			for(int i =0; i < arrSize;i++){
//				delete[i]arr;
//			}
		}

};

int main(){
	
	//for normal constructor and object 1
	
	DynamicArray myArray(5);
	for(int i =0; i<5 ; i++){
		myArray.setValue(i,i);
	}
	
	//second Object
	myArray.print();
}