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
			cout<<"Animal Class Destructed"<<endl;
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
			cout<<"Deer Class Destructed"<<endl;
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
			cout<<"Zebra Class Destructed"<<endl;
		}
	
};

void displayAll(Animal *pointer[] , int size){
	
	for(int i=0;i<size;i++){
		pointer[i]->display();
		
		cout<<endl<<endl<<endl;
	}
	
}

int main(){
	
	int size = 3;
	
	Animal *pointer[size] ;
	
	pointer[0] = new Deer("The Jumper" , "Dark Brown" ,true);
	pointer[1] = new Zebra("The Runner" , "White And Black" , "Bold Black And White Striping Pattern");
	pointer[2] = new Deer("The Jumper Junior" , "Light Brown" , false);
	
	displayAll(pointer , size);
	
	
	cout<<"Releasing Memory Now"<<endl<<endl;
	
	for(int i=0;i<size;i++){
		delete pointer[i];
	}
	
	cout<<endl;
	cout<<"All Objects Destroyed And Memory Released"<<endl;
	
	return 0;
}