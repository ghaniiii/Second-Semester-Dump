#include<iostream>
#include<string.h>

using namespace std;

class List{
	
	private:
		int *data;
		int size;
		
	public:
		List(int size){
			data = new int [size];
		}
		void fill(){
			for(int i=0;i<size;i++){
				data[i] = i*i;
			}
		}
		
		void update(int index , int val){
			data[index] = val;
		}
		void print(){
			for(int i =0;i<size;i++){
				cout<<data[i]<<" ";
			}
		}
		
		~List(){
			delete [] data;
		}
	
};

void destroyList(List ObjectThree){
	
}

int main(){
	
	List objectOne(5);
	objectOne.fill();
	
	cout<<"Obj1 : ";
	objectOne.print();
	
	List objectThree (objectOne);
	objectThree.update(0,3);
	
	cout<<"\n\nobj1 : "; 
	objectOne.print();
	
	destroyList(objectOne);
	
	cout<<"\n\nobj1 : ";
	objectOne.print();
	
	return 0;
}