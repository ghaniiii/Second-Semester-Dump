#include <iostream>
using namespace std;

class account{
	public:
		string name;
		int id;
		static float rate_of_intrest ; // staticaly declared ;
	
	// Constructer 
	account(string name, int id)
	{
		this->name = name;
		this->id = id;
	}
	
	void Display(){
		cout << "Name = " << name << endl;
		cout << "ID = " << id << endl;
		cout << "Rate of intrest = " << rate_of_intrest++ <<endl;
		cout << endl;
 	}
		
};

// initilization or accessing the member variable rate_of_intrest ;
float account::rate_of_intrest = 3.5;

int main(){
	
	//First Method For Initialization
	
	// creating objects of account class ;
	// assigning it values because of constructer 
	account a1("ABD",5);
	account a2("Abdul Ghani Khan",8);
	
	//Second Method For Initialization
	account a3 = account("Khan", 4 );
	
// 	a1.account("Uzm", 5);
// 	a2.account("Uzair", 8);
	
	a1.Display();
	a2.Display();
	a3.Display();
	
	return 0;
}