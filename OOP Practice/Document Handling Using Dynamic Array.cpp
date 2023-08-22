#include<iostream>
#include<string.h>

using namespace std;

class Document{
	int size;
	string *array;
	int lines = 0;
	
	public:
		Document(){
			size = 0;
			array = new string [size];
		}
		
		void AddLine(string line){
			string *newArray = new string [size+1];
			
			for(int i=0;i<size;i++){
				newArray[i] = array[i];
			}
			
			newArray[size] = line;
			
			delete[]array;
			
			size++;
			
			array = newArray;
			
			lines++;
		}
		
		void UpdateLine(string line,int index){
			array[index-1] = line;
		}
		
		void DeleteLine(int index){
			
			index--;
			
			for(int i=index ;i<size-1;i++){
				array[i] = array[i+1];
			}
			size--;
			line--;
		}
		
		int HowManyLines(){
			return lines;
		}
		
		void PrintAll(){
			for(int i=0;i<size;i++){
				cout<<"Line Number : "<<i+1<<" "<<array[i]<<endl;
			}
		}
		
		void PrintSingleLine(int index){
			
			if(index > 0 && index <=size){
			
				cout<<endl<<endl;
				cout<<array[index-1]<<endl<<endl;
			}
			else {
				cout<<"Wrong Input"<<endl;
			}
			
		}
};


int main(){
	Document File;
	string line;
	int index;
	int option;
	char option2;
	
	
	
	do{
		cout<<"1. Add A line"<<endl;
		cout<<"2. Update A Line"<<endl;
		cout<<"3. Delete A Line"<<endl;
		cout<<"4. Check How Many Lines Are In The Document"<<endl;
		cout<<"5. Print All Lines"<<endl;
		cout<<"6. Print Single Line"<<endl;
		cin>>option;
		
		
		if(option == 1){
			cout<<"Enter The Line"<<endl;
			fflush(stdin);
			getline(cin , line);
			File.AddLine(line);
		}
		else if(option ==2){
			cout<<"Enter the Line Number For Updation ";
			cin>>index;
			cout<<"Enter the Updated Line";
			fflush(stdin);
			getline(cin , line);
			
			File.UpdateLine(line , index);
		}
		else if(option == 3){
			cout<<"Enter the Index Number To Delete";
			cin>>index;
			
			File.DeleteLine(index);
		}
		else if(option == 4){
			cout<<"These Are The Lines In The Document :-"<<endl;
			cout<<File.HowManyLines()<<endl;
		}
		else if(option == 5){
			File.PrintAll();
		}
		else if(option == 6){
			cout<<"Enter the Line Number To Print";
			cin>>index;
			
			File.PrintSingleLine(index);
		}
		else{
			cout<<"Wrong Input"<<endl;
		}
		
		cout<<endl;
		cout<<"Do You Want To Access The Meny Again ? : y/n : ";
		cin>>option2;
	}
	while(option2 == 'y' || option2 == 'Y');
	
}