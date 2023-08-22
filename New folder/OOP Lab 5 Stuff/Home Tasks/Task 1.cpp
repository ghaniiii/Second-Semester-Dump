#include<iostream>
#include<string.h>

using namespace std;

class Inventory{
	private:
		
		int ID;
		string name;
		int price;
		int quantity;
		
	public:
		
		Inventory(int ID = 0, string name = "----", int price = 0, int quantity = 0 ){
			
			this->ID = ID;
			this->name = name;
			this->price = price;
			this->quantity = quantity;
			
		}
		
		~Inventory(){
			
			cout<<endl<<endl<<endl;
			cout<<"Object  Destroyed"<<endl;

		}
		
		void setID(int ID){
			this->ID = ID;
		}
		
		int getID(){
			return ID;
		}
		
		void setName(string name){
			this->name = name;
		}
		
		string getName(){
			return name;
		}
		
		void setPrice(int price){
			this->price = price;
		}
		
		int getPrice(){
			return price;
		}
		
		void setQuantity(int quantity){
			this->quantity = quantity;
		}
		
		int getQuantity(){
			return quantity;
		}
		
		void displayItemDetails(){
			cout<<endl;
			cout<<"     ID is : "<<ID<<endl;
			cout<<"     Name is : "<<name<<endl;
			cout<<"     Price is : "<<price<<endl;
			cout<<"     Quantity is : "<<quantity<<endl<<endl<<endl;
		}
	
};

void displayItems(Inventory Items[], int size);
Inventory updateItemDetails(Inventory Items[] , int option);
void displayItemsByID(Inventory Items[] , int size);



int main(){
	
	int numOfItems , option;
	char yesno;
	
	cout<<"Enter the Number Of Items To Store : ";
	cin>>numOfItems;
	
	Inventory Items[numOfItems];
	
	
	do{

			cout<<" ___________________________________________"<<endl;
			cout<<"|                                           |"<<endl;
			cout<<"| This Is The Menu Select One Of these:-    |"<<endl;
			cout<<"| 1). Display Items                         |"<<endl;
			cout<<"| 2). Update item details                   |"<<endl;
			cout<<"| 3). Search for items by ID                |"<<endl;
			cout<<"|___________________________________________|"<<endl<<endl<<endl;
			
			cout<<"Enter Your Option : ";
			cin>>option;  cout<<endl<<endl;
			
			
			if(option == 1){
				cout<<"Displaying Items:-"<<endl<<endl;
				displayItems(Items , numOfItems);
			}
			else if(option == 2){
				cout<<"Updating Items:-"<<endl<<endl;
					int option;
	
					cout<<"Enter Your Option For Which You Want To Update 1-"<<numOfItems<<" : ";
					cin>>option; cout<<endl;
					
					
				Items[option-1] = updateItemDetails(Items , option);
				
			}
			
			else if (option == 3){
				cout<<"You Are Searching For Items Through ID:- "<<endl<<endl;
				displayItemsByID(Items , numOfItems);
				
			}
			else {
				cout<<"Wrong Input"<<endl<<endl;
			}
			
		cout<<"Do You Want To Access The Menu Again ? : y/n : ";
		cin>>yesno;
		
		cout<<endl<<endl;
	}
	while(yesno == 'y');
	
	
	
	return 0;
}

void displayItems(Inventory Items[], int size){
	Items[size];
	
	for(int i=0;i<size;i++){
		cout<<"Item Number "<<i+1<<" Is :-"<<endl;
		Items[i].displayItemDetails(); 
	}
}


Inventory updateItemDetails(Inventory Items[] , int option){
	Items[option-1];
	
	int updatedID;
	string updatedName;
	int updatedPrice;
	int updatedquantity;
	

	
	cout<<"Enter Updated  ID : ";
	cin>>updatedID;
	Items[option-1].setID(updatedID);
	
	cout<<"Enter Updated Name : ";
	fflush(stdin);
	getline(cin,updatedName);
	Items[option-1].setName(updatedName);
	
	cout<<"Enter Updated Price : ";
	cin>>updatedPrice;
	Items[option-1].setPrice(updatedPrice);
	
	cout<<"Enter Updated Quantity : ";
	cin>>updatedquantity;
	Items[option-1].setQuantity(updatedquantity);
	
	
	return Items[option-1];
	
}

void displayItemsByID(Inventory Items[] , int size){
	
	Items[size];
	
	int ID;
	
	cout<<"Enter the ID : ";
	cin>>ID;
	
	for(int i=0;i<size;i++){
		if(ID == Items[i].getID()){
			
			cout<<"The Items Details Are :-"<<endl;
			Items[i].displayItemDetails();
		}
	}
}