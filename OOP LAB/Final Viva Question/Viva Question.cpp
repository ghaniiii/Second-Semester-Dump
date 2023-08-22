#include <iostream>
#include <cstdlib>


using namespace std;

class Dice {
	public:
	    int roll(){
	        return rand() % 6 + 1;
	    }
};

int main() {


    
    char rollAgain;
    char yesno;

    Dice dice;
	
	do{
		
		int playerScore = 0;
    	int computerScore = 0;
	
	    do {
	        cout << "Player's score: " << playerScore << endl <<endl<<endl;
	
	        
	        int computerDice1 = dice.roll();
	        int computerDice2 = dice.roll();
	        
//	        cout<<"Computer Rolled  "<<computerDice1<<" and "<<computerDice2<<endl<<endl<<endl;
	        
	        computerScore = computerScore + computerDice1 + computerDice2;
	
	        cout<<endl<<endl;
	        
	        
	        
	        
	        cout << "Roll dice? (y/n): ";
	        cin >> rollAgain;
			
			
			
			
	        if (rollAgain == 'y') {
	            int playerDice1 = dice.roll();
	            int playerDice2 = dice.roll();
	            
	            
	            playerScore = playerScore + playerDice1 + playerDice2;
				
				cout<<endl<<endl;
				
	            cout << "Player rolled "<<playerDice1<<" and "<<playerDice2<<endl;
	        }
	        
			
			cout<<endl<<endl;
			
	        cout << "Computer's score: "<<computerScore<<endl;
	        
	       
	        
	    }while(rollAgain == 'y' && playerScore <= 21 && computerScore <= 21);
		
		cout<<endl<<endl;
		
	    cout<<"Final scores: Player = "<<playerScore << "\n              Computer = "<<computerScore<<endl;
		
		cout<<endl<<endl;
		
	    if(playerScore > 21){
	    	cout<<"   ___________________________________________"<<endl;
			cout<<"  /                                          /"<<endl;
	        cout<<" /       Player Busts! Computer Wins.       /"<<endl;
	        cout<<"/__________________________________________/"<<endl;
	    }
		else if(computerScore > 21){
	        
	        cout<<"   ___________________________________________"<<endl;
			cout<<"  /                                          /"<<endl;
	        cout<<" /   Computer Busts ! Player Wins           /"<<endl;
	        cout<<"/__________________________________________/"<<endl;
	    
		}
		else if(playerScore > computerScore){

	        cout<<"   ___________________________________________"<<endl;
			cout<<"  /                                          /"<<endl;
	        cout<<" /               Player Wins                /"<<endl;
	        cout<<"/__________________________________________/"<<endl;
	    
		}
		else if(playerScore < computerScore){
		
	        cout<<"   ___________________________________________"<<endl;
			cout<<"  /                                          /"<<endl;
	        cout<<" /              Computer Wins               /"<<endl;
	        cout<<"/__________________________________________/"<<endl;
	    
		}
		else{
			
	        cout<<"   ___________________________________________"<<endl;
			cout<<"  /                                          /"<<endl;
	        cout<<" /              It's A Tie !                /"<<endl;
	        cout<<"/__________________________________________/"<<endl;
	    }
	    
	    cout<<endl<<endl;
	    
	    cout<<"Do You Want To Play Another Game  y/n : ";
	    
	    cin>>yesno;
	    
	}while(yesno == 'y' || yesno == 'Y');

    return 0;
}
