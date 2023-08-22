#include<iostream>
#include<string.h>

using namespace std;

class Animal{
	
	protected:
	string name;
	int age;
	
	public:
		
		Animal(string name , int age){
			this->name = name;
			this->age = age;
		}
		
		void speak(){
			
		}
		
		
};

class Bird : private Animal {
	int wingLength;
	
	public:
		Bird(string name , int age , int wingLength) : Animal(name , age){
			this->wingLength = wingLength;
		}
		
		void speak(){
			cout<<"My Name Is : "<<name<<endl;
			cout<<"My Age Is : "<<age<<endl;
			cout<<"My Wing Length Is : "<<wingLength<<endl;
			cout<<"Im A Bird And I Can Sing"<<endl<<endl;
		}
	
};

class Reptile : private Animal {
	string habitat;
	
	public:
		Reptile(string name , int age , string habitat) : Animal(name , age){
			this->habitat = habitat;
		}
		
		void speak(){
			cout<<"My Name Is : "<<name<<endl;
			cout<<"My Age Is : "<<age<<endl;
			cout<<"I Live In : "<<habitat<<endl;
			cout<<"Im A Reptile And I Can Creep...."<<endl<<endl;
		}
};


int main(){
	
	Bird B1("Parrot" , 3 , 5);
	Reptile R1("Crocodile" , 25 , "Swamps");
	

	B1.speak();
	R1.speak();
	
	
	return 0;
}

