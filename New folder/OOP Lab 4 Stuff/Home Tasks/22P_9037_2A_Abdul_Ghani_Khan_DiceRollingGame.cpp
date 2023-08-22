#include<iostream>
#include<string.h>
#include<cstdlib>

using namespace std;

class Dice{
	
	private:
		int value;
		
	public:
		Dice(){
			value = 0;                         //A constructor that initializes the value to zero as an object is created
											   //as a constructor runs automatically as an object of a class is made.
		}
		
		
		void setValue(int value){
			this->value = value;               // taking a number as an input and setting it to the opject private member
		}
		

		int getValue(){                        //Getter
			return value;
		}

		void displayValue(){                   //Displays Value
			cout<<value;
		}
		
		int roll(){
			setValue ( (rand() % 6) + 1 ) ;    //using rand() function to get values under 6 and adding 1 so it doesnt give 0 as 
			                                   // 0 number is not availbe in a dice.
			
				
				int result = getValue();
				
				if(result < 6){
					cout<<"    |         "; displayValue(); cout<<" (Better Luck Next Time)";cout<<"         |"<<endl;;
					
											   //Making It A Bit Nice By Making A Block Around the Answer :)
				}
				else if(result == 6){
					cout<<"    |               ";	displayValue(); cout<<" (Chakkaaaa)"; cout<<"               |"<<endl;;
				}

		}
		

	
};


int main(){
	cout<<"Welcome To The Dice Rolling Game :-"<<endl<<endl<<endl;
	
	char choice;
	Dice D1;
	
	cout<<"Do You Want To Roll The Dice ? y/n : ";         //as the sample output stated to ask first so asking first
	cin>>choice; cout<<endl;							   // and then asking in the loop again thats why ive written 
														   // this code here and in the loop too according to the sample output given
	if(choice == 'y' || choice == 'Y'){
		
		
		do{
		
		
			cout<<"     ___________________________________________"<<endl;
			cout<<"    |                                           |"<<endl;
			                        D1.roll(); 
			cout<<"    |___________________________________________|"<<endl<<endl<<endl;
				
		
				cout<<"Do You Want To Roll The Dice ? y/n : ";
				cin>>choice; cout<<endl;
				
				
					
		}
		while(choice == 'y' || choice == 'Y' );
		
	}
	
	cout<<"     ___________________________________________"<<endl;
	cout<<"    |                                           |"<<endl;
	cout<<"    |      Created By Abdul Ghani Khan          |"<<endl;
	cout<<"    |        BS-CS      Section 2A              |"<<endl;
	cout<<"    |___________________________________________|"<<endl;
	
	return 0;
}

