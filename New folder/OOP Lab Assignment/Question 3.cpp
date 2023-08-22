#include<iostream>
#include<string.h>

using namespace std;

class Brain{
	private:
		int brain;
		
	public:
		Brain() : brain(1){}
		void setamount(int brain){
			this->brain = brain;
		}
		void getamount(){
			cout<<"I Have "<<brain<<" Brain"<<endl;
		}
};

class Heart{
	private:
		int heart;
		
	public:
		Heart() : heart(1){}
		void setamount(int heart){
			this->heart = heart;
		}
		void getamount(){
			cout<<"I Have "<<heart<<" Heart"<<endl;
		}
};

class Legs{
	private:
		int legs;
	
	public:
		Legs() : legs(2){}
		void setamount(int legs){
			this->legs = legs;
		}
		void getamount(){
			cout<<"I Have "<<legs<<" Legs"<<endl;
		}
};

class Person{
	private:
		Legs L;
		Heart H;
		Brain B;
		
	public:
		void setDetails(){
			
			int number;
			
			cout<<"Enter The Number Of Heart : ";
			cin>>number;
			
			H.setamount(number);
			
			cout<<"Enter The Number Of Brain : ";
			cin>>number;
			
			B.setamount(number);
			
			cout<<"Enter The Number Of Legs : ";
			cin>>number;
			
			L.setamount(number);
		}
		
		void getDetails(){
			cout<<"I Am A Person"<<endl<<endl;
			B.getamount();
			H.getamount();
			L.getamount();
		}
};

int main(){
	Person P;
	P.setDetails();
	
	cout<<endl<<endl<<endl;
	
	P.getDetails();
}