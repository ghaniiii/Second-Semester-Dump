#include<iostream>
#include<string.h>

using namespace std;

class Favourite_Songs{
	private:
		
		int size;
		string *songs;
		
	public:
		
		Favourite_Songs(){
			size = 0;
			songs = new string [size];
		}
		
		
		
		Favourite_Songs(Favourite_Songs &Object){
			
			size = Object.getSize();
			
			songs = new string [size];
			
			for(int i=0 ; i<Object.getSize(); i++ ){
				songs[i] = Object.songs[i];
			}	
			
		}
		
		
		int getSize(){
			return size;
		}
		
		
		void addSong(string song){
			string *new_songs = new string [size + 1];
			
			for(int i=0;i<size;i++){
				new_songs[i] = songs[i];
			}
			
			new_songs[size] = song;
			
			size++;
			
			delete []songs;
			
			songs = new_songs;
			
		}
		
		
		void deleteSongs(int index){
			
			index = index - 1;
			for(int i = index ; i<size-1 ; i++){
				
				songs[i] = songs[i+1];
				
			}
			
			size--;
			
		}
		
		
		void updateSong(int index , string song){
			songs[index-1] = song;
		}
		
		
		void printSongs(){
			
			for(int i=0;i<size;i++){
				
				cout<<" "<<i+1<<". "<<songs[i]<<endl;
				
			}
			
		}
		
		
		~Favourite_Songs(){
			delete []songs;
			
			cout<<"               __________________"<<endl;
			cout<<"              |                  |"<<endl;
			cout<<"              | Object Destroyed |"<<endl;
			cout<<"              |__________________|"<<endl;
		}
};


int main(){
	
	int initially , choice ;
	string song;
	int songNumber;
	char yesno;
	int counter = 0;

		
	Favourite_Songs Songs;

		
		do{
			
				cout<<"       _______________________________________"<<endl;
				cout<<"      |                                       |"<<endl;
				cout<<"      |          -------------------          |"<<endl; 
				cout<<"      |          This Is The Menu :-          |"<<endl;
				cout<<"      |          -------------------          |"<<endl;
				cout<<"      |                                       |"<<endl;
				cout<<"      |            1. Add A Song              |"<<endl;
				cout<<"      |          2. Delete A Song             |"<<endl;
				cout<<"      |          3. Update A Song             |"<<endl;
				cout<<"      |         4. Print All Songs            |"<<endl;
				cout<<"      |      5. Create Backup Of Songs        |"<<endl;
				cout<<"      |              6. Exit                  |"<<endl;
				cout<<"      |_______________________________________|"<<endl<<endl;;
				
				cout<<" Enter Your Desired Choice : ";
				cin>>choice;
				cout<<endl<<endl;
				
			if(choice == 1){
				cout<<" Enter the Song That You Want To Add : ";
				fflush(stdin);
				getline(cin , song);
				
				Songs.addSong(song);
				
				cout<<endl<<endl<<"         __________________________________"<<endl;
				cout<<"        |                                  |"<<endl;
				cout<<"        |    Successfully Added The Song   |"<<endl;
				cout<<"        |__________________________________|"<<endl; 
				counter++;
			}	
			else if(choice == 2){
				
				cout<<" Enter the Song Number From the List That You Want To Delete : ";
				cin>>songNumber;
				
				if(counter>=songNumber){
				
				
				Songs.deleteSongs(songNumber);
				
				cout<<endl<<endl<<"         __________________________________"<<endl;
				cout<<"        |                                  |"<<endl;
				cout<<"        |   Successfully Deleted The Song  |"<<endl;
				cout<<"        |__________________________________|"<<endl<<endl; 
				counter--;
				}
				else{
					cout<<endl<<endl<<"         __________________________________"<<endl;
				cout<<"        |                                  |"<<endl;
				cout<<"        |    Wrong Input Song Not Found    |"<<endl;
				cout<<"        |__________________________________|"<<endl<<endl; 
				}
			}
			else if(choice == 3){
				cout<<" Enter the Song Number From the List That You Want To Update : ";
				cin>>songNumber;
				
				cout<<" Enter the New Song That You Want To Update : ";
				fflush(stdin);
				getline(cin , song);
				

				
			
				
				Songs.updateSong(songNumber , song);
				
				cout<<endl<<endl<<"         __________________________________"<<endl;
				cout<<"        |                                  |"<<endl;
				cout<<"        |   Successfully Updated The Song  |"<<endl;
				cout<<"        |__________________________________|"<<endl<<endl; 
				}

			
			else if(choice == 4){
				Songs.printSongs();
			}
			else if(choice == 5){
				
				Favourite_Songs Backup(Songs);
				
				cout<<endl<<endl<<"     ____________________________________________"<<endl;
				cout<<"    |                                            |"<<endl;
				cout<<"    |  Successfully Created Backup Of The Songs  |"<<endl;
				cout<<"    |____________________________________________|"<<endl<<endl; 
				
				cout<<" The Back Up Created Is As Below :-"<<endl<<endl;
				Backup.printSongs();

			}
			else if(choice == 6){
				cout<<"         __________________________________"<<endl;
				cout<<"        |                                  |"<<endl;
				cout<<"        | Thank You For Using Our Software |"<<endl;
				cout<<"        |__________________________________|"<<endl<<endl;
			}
			else{
				cout<<" Wrong Input "<<endl;
			}
		
		cout<<endl<<endl;
		cout<<" ________________________________________________"<<endl<<endl;
		cout<<" Do You Want To Access The Menu Again ? : y/n : ";
		cin>>yesno; cout<<" ________________________________________________"<<endl<<endl;
		cout<<endl<<endl<<endl;
		
		
		}
		while(yesno == 'y' || yesno == 'Y');
		
		cout<<"        __________________________________"<<endl;
		cout<<"       |                                  |"<<endl;
		cout<<"       |   CREATED BY ABDUL GHANI KHAN    |"<<endl;
		cout<<"       |   ---------------------------    |"<<endl;
		cout<<"       |   SECTION 2A   |   BS-CS 2022    |"<<endl;
		cout<<"       |__________________________________|"<<endl;
	
	
	return 0;
}