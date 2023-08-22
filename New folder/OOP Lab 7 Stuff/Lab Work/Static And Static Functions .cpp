#include<iostream>
#include<string.h>

using namespace std;

class Account{
	public:
		int balance;
		static int remain;
		
	void setBalance(int b){
		balance = b;
	}
	
	static void setRemain(int r){
		remain = r;
		cout<<"The Value Is : "<<r;
	}
	
};

//Inititalization OF the Static Member Variable 

int Account::remain = 3;


int main(){
	
	//calling the function without the use of object
	
	Account::setRemain(4);
}