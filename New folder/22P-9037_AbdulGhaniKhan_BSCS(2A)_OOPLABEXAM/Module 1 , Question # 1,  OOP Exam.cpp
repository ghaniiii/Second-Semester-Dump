#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main() {
	
	char option;
	
	do{
		
		
		//random number generator
		// By Using the ctime library above  at the start of the proogramme.
		// As i told you in the lab exam the random function sometimes generate the same number again and again
		// so we have to do this so it gives different random numbers everytimg and not the same.
	    srand(time(0)); 
	
	
		// Making both the position of the animals as 1 and 1 to be the same 
		// Also note that the when the position of both the animals are same that block will show SH to show they both are at the same 
		// position
	    int tortoisePosition = 1;
	    int harePosition = 1;
	
	    cout << "THE RACE HAD STARTED AND THEY BOTH ARE COMPETING" << endl;
	    
	    cout<<endl<<endl<<endl;
	
		// while loop so that the square as mentioned in the paper doesnt get out of 70
	    while(tortoisePosition < 70 && harePosition < 70){
	    	
	    	// Generating a random number from 1 to 10 for tortoise to move
	        int tortoiseMove = rand() % 10 + 1; 
	        
	        // Generating a random number from 1 to 10 for hare's move
	        int hareMove = rand() % 10 + 1; 
	
	        // Logic For Tortoise move through conditions below ->
	        
	        // For 50 50 chances
	        if(tortoiseMove >= 1 && tortoiseMove <= 5){

	        	// Fast plod : move 3 squares to the right
	            tortoisePosition += 3; 
	        	}
	            
	        //For 20% chance
	        else if(tortoiseMove >= 6 && tortoiseMove <= 7){
	        	
	        // Slip: move 6 squares to the left
	            tortoisePosition -= 6; 
	        }
	            
	        //For 30% chance
	        else{
	        	
	        // Slow plod: move 1 square to the right
			    tortoisePosition += 1; 
			} 
	
	        // Make sure tortoise doesnt slip beyond square 1
	        if(tortoisePosition < 1){
			
	            tortoisePosition = 1;
				
			}
	        // Hare's move
	        
	        // 20% chance
	        if(hareMove >= 1 && hareMove <= 2){
					// Sleep: no move at all
					// Keeping It Empty For Sleep 
			}  
			
			//For 20% chance
	        else if(hareMove >= 3 && hareMove <= 4){ 
	        
	        // Big Hop: move 9 squares to the right
	            harePosition += 9; 
	        }
	        
	        //For 10% chance
	        else if(hareMove == 5){ 
	        
	        // Big Slip: move 12 squares to the left
	            harePosition -= 12; 
	        }
	        
	        // 30% chance
	        else if(hareMove >= 6 && hareMove <= 8){ 
	            
			// Small hop: move 1 square to the right
				harePosition += 1; 
	        }
	        
	         // 20% chance
	        else{
	        	
	         // Small slip: move 2 squares to the left
	            harePosition -= 2;
			}
	        // Make sure hare doesn't slip more then square 1
	        if(harePosition < 1)
	            harePosition = 1;
	
	        // Printing each position of the tortoise and hair
	        for(int i = 1; i <= 70; i++){
	            if(i == tortoisePosition && i == harePosition){
	            	
	            	 // Both animals are at the same place or square
	                cout << "TH";
	            }
	            else if(i == tortoisePosition){
	            	
	            	//print position of TOrtoise
	                cout << "T";
				}
				else if(i == harePosition){
					
					//print postion Of Hair
	                cout << "H";
	            }
	            else{
	                cout << ".";
	            }
	        }
	        cout << endl;
	    }
	
		cout<<endl<<endl<<endl<<endl;
			
	    // To Choose The Winner
	    // Applying below conditions
	    
	    if(tortoisePosition >= 70 && harePosition >= 70){
	        cout << "Its a tie!" << endl;
	        
	    }
	    else if(tortoisePosition >= 70){
		
	        cout << "TORTOISE WINS !!! SO OUR CHILDHOOD STORY IS TRUE :) !!" << endl;
	    }
		
		else{
	        cout << "HAIR WINS !!! SO OUR CHILDHOOD STORY WAS WRONG :(  !!" << endl;
		}
		
		cout<<endl<<endl<<endl;
		
		cout<<"DO YOU WANT TO PLAY THE GAME AGAIN ? : y/n : ";
		cin>>option;
		
	}
	while(option == 'y' || option =='Y');
	
	
    return 0;
}
