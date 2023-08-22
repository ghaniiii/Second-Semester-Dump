#include<iostream>
#include<string.h>

using namespace std;


class Add{
	public:

		
		int add(int a , int b){
			return a+b;
		}
		
		int add(float a , int b){
			return (int)a+b;
		}
		
		int add(int a , float b){
			return (int)a+b;
		}
		
		int add(float a , float b){
			return (int)a+b;
		}
};

int main(){
	
	Add A;
	
	cout<<A.add(12,12)<<endl;
	cout<<A.add(12.2 , 12)<<endl;
	cout<<A.add(12 , 12.2)<<endl;
	cout<<A.add(12.2 , 12.2)<<endl;
	
	
	return 0;
}