#include<iostream>
#include<string.h>

using namespace std;

int addElement(string *&array , int size , string content);
void updateElement(string *&array , int index, string content);
int deleteElement(string *&array , int size , int index);

int main(){
	
	int option;
	int size = 0;
	string content;
	string *array = new string [size];
	int index;
	char yesno;
	
	
	
	
	do{
		
		cout<<"1. Add An Element To The List"<<endl;
		cout<<"2. Update The Element On A Specific Number"<<endl;
		cout<<"3. Delete A Specific Element On A Specific Number"<<endl;
		cout<<"4. Print All"<<endl;
		cout<<"Enter Your Option : ";
		cin>>option;
		
		if(option == 1){
			cout<<"Enter The Element That You Want To Add : ";
			fflush(stdin);
			getline(cin, content);
			
			size = addElement(array , size , content);
		}
		else if(option == 2){
			cout<<"Enter the Number Of Element That You Want To Update : ";
			cin>>index;
			cout<<"Enter the New Element : ";
			fflush(stdin);
			getline(cin , content);
			updateElement(array , index , content);
			
		}
		else if(option == 3){
			cout<<"Enter the Number Of Element That You Want To Update : ";
			cin>>index;
			size = deleteElement(array , size , index);
		    
		}
		else if(option == 4){
			cout<<"Printing All The Elements :-"<<endl;
			for(int i=0;i<size;i++){
				cout<<array[i]<<endl;
			}
		}
		else{
			cout<<"Invalid Option"<<endl;
		}
		
		cout<<"Do You Want To Access The Menu Again ? : y/n : ";
		cin>>yesno;
	}
	while(yesno == 'y' || yesno == 'Y');
	
	
	
	return 0;
}


int addElement(string *&array , int size , string content){
	
	string *new_array = new string [size+1];
	
	for(int i = 0;i<size; i++){
		new_array[i] = array[i];
	}
	
	new_array[size] = content;
	
	delete[] array;
	
	size++;
	
	array = new_array;
	
	
	return size;
	
}

void updateElement(string *&array , int index, string content){
	array[index-1] = content;
}


int deleteElement(string *&array , int size , int index){
	
	index--;
	for(int i=0;i<size-1;i++){
		array[i] = array[i+1];
	}
	
	size--;
	
	return size;
}