#include<iostream>
#include<string.h>

using namespace std;

template<class T>

class Age{
	private:
		T age;
		T amount;
	public:
		Age(){
			
		}
		void setageamount(T age , T amount){
			this->age = age;
			this->amount = amount;
		}
		
		T getage(){
			return age;
		}
		
		T getamount(){
			return amount;
		}
};

template<class A>

A function(A first , A second){
	if(first < second){
		return second;
	}
	else{
		return first;
	}
}


int main(){
	
	cout<<function(3,5)<<endl;
	
	Age <int> First;
	First.setageamount(18,50000);
	cout<<First.getage()<<endl;
	cout<<First.getamount()<<endl;
	
	Age <string> second;
	second.setageamount("Abdul" , "Ghani");
	cout<<second.getage()<<second.getamount()<<endl;
	
	
	return 0;
}