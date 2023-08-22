#include<iostream>
#include<string.h>

using namespace std;

class CarBasic{
	string color;
	string doors;
	string wheals;
	string Model;
	
	public:
		CarBasic(){
			color = "----";
			doors = "----";
			wheals = "----";
			Model = "----";
		}
		
		void setDetails(string color , string doors , string wheals , string Model){
			this->color = color;
			this->doors = doors;
			this->wheals = wheals;
			this->Model = Model;
		}
		
		string getColor(){
			return color;
		}
		
		string getDoors(){
			return doors;
		}
		
		string getWheals(){
			return wheals;
		}
		
		string getModel(){
			return Model;
		}
};

class Ferrari : public CarBasic {
	string Make;
	
	public:
		Ferrari(){
			Make = "----";
		}
		
		void setMake(string Make){
			this->Make = Make;
		}
		
		string getMake(){
			return Make;
		}
};

int main(){
	Ferrari Car1;
	
	Car1.setDetails("RED","2","4","2023");
	Car1.setMake("2024");
	
	cout<<"Color Of The Car Is : "<<Car1.getColor()<<endl;
	cout<<"Doors Of The Car Are : "<<Car1.getDoors()<<endl;
	cout<<"Wheels Of The Car Are : "<<Car1.getWheals()<<endl;
	cout<<"Model Of The Car Is : "<<Car1.getModel()<<endl;
	cout<<"Make Of The Car Is : "<<Car1.getMake()<<endl;
	
}