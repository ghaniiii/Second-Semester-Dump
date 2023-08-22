#include<iostream>
#include<string.h>

using namespace std;

class Animal{
	protected:
		string name;
		string color;
		
	public:
		Animal(string name , string color) : name(name) , color(color){}
		
		virtual void display() = 0;
		
		virtual ~Animal(){
			cout<<"Animal Class Destructed"<<endl<<endl;
		}
		
};

class Deer : public Animal{
	bool hasAntlers;
	
	public:
		Deer(string name , string color , bool antlers) : Animal(name , color) , hasAntlers(antlers) {}
		
		void display(){
			cout<<"Deer :-"<<endl<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Color : "<<color<<endl;
			cout<<"Antlers : ";
			
			if(hasAntlers == 0){
				cout<<"It Doesnt Have Antlers"<<endl;
			}
			else{
				cout<<"It Has Antlers"<<endl;
			}
		}
		
		~Deer(){
			cout<<"Deer Class Destructed"<<endl<<endl;
		}
};

class Zebra : public Animal{
	string stripe_pattern;
	
	public:
		Zebra(string name , string color , string stripepattern) : Animal(name , color) , stripe_pattern(stripepattern) {}
	
		void display(){
			cout<<"Zebra :-"<<endl<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Color : "<<color<<endl;
			cout<<"Stripe Pattern : "<<stripe_pattern<<endl;
			
		}
		
		~Zebra(){
			cout<<"Zebra Class Destructed"<<endl<<endl;
		}
	
};


int main(){
	Deer D1("The Jumper","Dark Brown",true);
	Zebra Z1("The Runner","White And Black","Bold Black And White Striping Pattern");
	
	
	D1.display();
	cout<<endl<<endl<<endl;
	
	Z1.display();
	
	cout<<endl<<endl<<endl;
	cout<<endl<<endl<<endl;
	
	return 0;
}