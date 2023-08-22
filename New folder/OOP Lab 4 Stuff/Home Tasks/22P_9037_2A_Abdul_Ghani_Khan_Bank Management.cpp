#include<iostream>
#include<string.h>

using namespace std;

class Account{
	
	private:
		string name;
		long long balance = 0;
		
	public:
		void depositAmount(int deposittedAmount){
			this->balance = balance + deposittedAmount;
		}	
		void withdrawAmount(int amountWithdrew){
			this->balance = balance - amountWithdrew;
		}
		
		string getName(){
			return this->name;
		}
		
		int getBalance(){
			return this->balance;
		}
		
		void setName(string nameSetter){
			this->name = nameSetter;
		}
		
		void setBalance(int balanceSetter){
			this->balance = balance + balanceSetter;
		}
	
};

Account createNewAccount();
void displayMenu();



int main(){
	
	int optionSpecifier;
	char yesno;
	Account A1;
	
	cout<<" ______________________________________________________________"<<endl;
	cout<<"|                                                              |"<<endl;
	cout<<"|                   Welcome To Our Software :-                 |"<<endl;
	cout<<"|______________________________________________________________|"<<endl;
	
	
	cout<<" ______________________________________________________________"<<endl;
	cout<<"|                                                              |"<<endl;
	cout<<"            Please Create An Account To Continue                "<<endl;
	cout<<"  Enter 1 To Create An Account Or Any Other Button To Exit: ";
	cin>>optionSpecifier; cout<<"|";
	
	cout<<"______________________________________________________________|"<<endl<<endl;
	
	
	if(optionSpecifier == 1){
		
		cout<<"\n\n------------------------------\n\n";
		
		A1 = createNewAccount();
		
		cout<<"\n\n------------------------------\n\n";
		
		
		cout<<"Congratulations You Have Created An Account With Us."<<endl;
		cout<<"Welcome On Board"<<endl<<endl<<endl;
		
		do{
		
		
				displayMenu();
				
				
				
				cout<<"Please Specify Your Option : ";
				cin>>optionSpecifier; cout<<endl;
				
				if(optionSpecifier == 1){
					cout<<"You Are Currently Displaying Your Balance. "<<endl;
					
					cout<<"\n------------------------------\n";
					
					cout<<"Your Balance Is : "<<A1.getBalance()<<endl;
					
					cout<<"\n------------------------------\n";
					
					
				}
				else if(optionSpecifier == 2){
					cout<<"You Are Currently Depositing Amount. "<<endl;
					cout<<"Enter the Amount That You Want To Deposit : ";
					
					int depositAmount;
					
					
					
					cin>>depositAmount; cout<<endl;
					
					cout<<"\n------------------------------\n";
					
					A1.setBalance(depositAmount);
					
					
					
					cout<<"Operation Successful"<<endl;
					
					cout<<"\n\n------------------------------\n\n";
					
				}
				else if(optionSpecifier == 3){
					cout<<"You Are Currently Withdrawing Amount. "<<endl;
					cout<<"Enter the Amount That You Want To Withdraw : ";
					
					int withdrawAmount;
					
					
					
					cin>>withdrawAmount; cout<<endl;
					
					
					
					if(withdrawAmount <= A1.getBalance()){
						A1.withdrawAmount(withdrawAmount);
						
						cout<<"\n\n------------------------------\n\n";
						
						cout<<"Operation Successful"<<endl;
						
						cout<<"\n\n------------------------------\n\n";
						
					}
					else{
						
						cout<<"\n\n------------------------------\n\n";
						
						cout<<"Sorry Not Enough Balance."<<endl;
						
						cout<<"\n\n------------------------------\n\n";
						
					}
					
					
				}
				else if(optionSpecifier == 4){
					
					cout<<"\n\n------------------------------\n\n";
					
					cout<<"Byeee , Have A Nice Day "<<endl;
					
					cout<<"\n\n------------------------------\n\n";
					
					
				}
				else{
					
					cout<<"\n\n------------------------------\n\n";
					
					cout<<"Wrong Option , Sorry"<<endl;
					
					cout<<"\n\n------------------------------\n\n";
				}
			
			cout<<"Do You Want To Access the Menu Again Press ? y/n : ";
			cin>>yesno; cout<<endl;
	
			
		}
		while(yesno == 'y' || yesno == 'Y');
	}
	else{
		cout<<"Have A Good Day Byeeeee"<<endl;
	}
	
	cout<<" ___________________________________________"<<endl;
	cout<<"|                                           |"<<endl;
	cout<<"|      Created By Abdul Ghani Khan          |"<<endl;
	cout<<"|        BS-CS      Section 2A              |"<<endl;
	cout<<"|___________________________________________|"<<endl;
	
	
	return 0;
}



void displayMenu(){
	
	cout<<"\n------------------------------\n\n";
	
	cout<<"1. Display Balance"<<endl;
	cout<<"2. Deposit Amount"<<endl;
	cout<<"3. Withdraw Amount"<<endl;
	cout<<"4. Exit"<<endl;
	
	cout<<"\n------------------------------\n";
}

Account createNewAccount(){
	
	string name;
	Account account;
	
	cout<<"Enter Your Name : ";
	fflush(stdin);
	getline(cin, name);
	

		

		account.setName(name);
		account.setBalance(0);
	
	
	return account;
}

