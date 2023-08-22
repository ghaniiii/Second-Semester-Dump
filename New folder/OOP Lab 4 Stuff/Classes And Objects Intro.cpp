#include<iostream>
#include<string.h>

using namespace std;

class sum{
	private:
		int a,b,c;  		   //member data
		
		
	public:
		void takeData(){	   //member function
			cout<<"ENTER THE DATAT OF a,b,c"<<endl;
			cin>>a>>b>>c; cout<<endl;
		}
		
		void displayData(){    //member function
			cout<<"Value Of A is : "<<a<<endl;
			cout<<"Value Of B is : "<<b<<endl;
			cout<<"Value Of C is : "<<c<<endl;
		}
};

int main(){
	sum S1;
	S1.takeData();    //in class . is used to access public data 
	S1.displayData();
}