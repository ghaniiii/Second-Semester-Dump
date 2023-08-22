#include<iostream>
#include<string.h>

using namespace std;

class Boat{
	protected:
		int boatLength;
		
	public:
		Boat(int boatLength){
			this->boatLength = boatLength ;
		}
		
		void swim(){
			cout<<"I Am Swimming"<<endl;
		}
		
};

class Plane{
	protected:
		int maxAltitude;
	
	public:
		Plane(int maxAltitude){
			this->maxAltitude = maxAltitude;
		}
		
		void fly(){
			cout<<"I Am Flying"<<endl;
		}
		
};

class Skimmer : protected Boat , Plane{
	private:
		int numPassengers;
		string name;
	
	public:
		Skimmer(string name , int boatLength , int maxAltitude , int numPassengers) : Plane(maxAltitude) , Boat(boatLength){
			this->numPassengers = numPassengers;
			this->name = name;
		}
		
		void Display(){
			cout<<"Skimmer Name : "<<name<<endl;
			cout<<"Length : "<<boatLength<<" ft"<<endl;
			cout<<"Max Altitude : "<<maxAltitude<<" ft"<<endl;
			cout<<"Passengers Able To Carry : "<<numPassengers<<endl<<endl;
			
			swim();
			fly();
		}
};


int main(){
	Skimmer S1("VIP Vehicle",40 , 14000 , 10);
	
	S1.Display();
}