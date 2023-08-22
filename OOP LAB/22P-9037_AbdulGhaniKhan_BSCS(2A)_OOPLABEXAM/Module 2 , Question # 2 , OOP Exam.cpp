#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

// For Unique Id Of Each Item
int counter = 1;

int countOfBooks = 0;
int countOfDVDS = 0;
int countOfMagazines = 0;


// Writing the common details which will be inheritted to all the other classes to be easy
class BasicDetails{
	private:
		string title;
		string authorproducer;
		int uniqueIdentifier;
		
	public:
		//constructor that marks all the int to null state so it shows they are empty
		BasicDetails(){
			title = "----";
			authorproducer = "----";
			uniqueIdentifier = 1;
			counter++;
		}
		
		//setting details
		void setCommonDetails(string title , string author){
			this->title = title;
			this->authorproducer = author;
		}
		
		// All are getter below this
		
		string getTitle(){
			return title;
		}
		
		string getAuthor(){
			return authorproducer;
		}
		
		int getID(){
			return uniqueIdentifier;
		}
};

// Book class with Basic Details Inherited as public
class Book : public BasicDetails {
	private:
		int numOfPages;
		
	public:
		//constructor that put 0 into numof pages
		Book(){
			numOfPages = 0;
		}
		
		void setDetails(int num , string title , string author){
			numOfPages = num;
			setCommonDetails(title , author);
		}
		
		int getPages(){
			return numOfPages;
		}
};

// DVD Class with basic details inherited as public
class DVD : public BasicDetails {
	private:
		float minutes;
		
	public:
		//constructor that puts 0 into minutes
		DVD(){
			minutes = 0;
		}
		
		float getMinutes(){
			return minutes;
		}
		
		void setDetails(float minutes ,string title ,string producer){
			this->minutes = minutes;
			setCommonDetails(title,producer);
		}
		
		
		
};

// Magazine class with basic details inherited as public
class Magazine : public BasicDetails {
	private:
		string issueNumber;
		
	public:
		//constructor putting ---- to isssue number to show it empty
		Magazine(){
			issueNumber = "----";
		}
		// Getters below this 
		
		string getIssueNumber(){
			return issueNumber;
		}
		
		void setDetails(string number, string title , string producer){
			this->issueNumber = number;
			
			// calling the setCommonDetails from the Basic Details class
			
			setCommonDetails(title,producer);
		}
};


class Library {
	
	// doing composition creating objects of classes of books , magazines , dvd in library 
	Book books[10];
	Magazine magazines[10];
	DVD dvd[10];

	
	public:
		
		// For data to be cin in
		string title;
		int name;
		string author;
		int pages;
		float minutes;
		string publishID;
		
		//constructor
		Library(){

		}
		
		
		// Getters and setter below this
		void addBook(){
			if(countOfBooks <= 9){
				cout<<"Enter The Name Of The Book : ";
				fflush(stdin);
				cin>>title;
				
				cout<<"Enter The Author Name : ";
				fflush(stdin);
				cin>>author;
				
				cout<<"Enter The Number Of Pages : ";
				cin>>pages;
				
				books[countOfBooks].setDetails(pages , title , author);
				
				countOfBooks++;
			}
			else{
				cout<<"Cannot Add More Then 10 Books"<<endl;
			}
			
			
		}
		
		void addDVD(){
			if(countOfDVDS <= 9){
				cout<<"Enter The Name Of The DVD : ";
				fflush(stdin);
				cin>>title;
				
				cout<<"Enter The Name : ";
				fflush(stdin);
				cin>>author;
				
				cout<<"Enter The Number Of Minutes : ";
				cin>>minutes;
				
				dvd[countOfDVDS].setDetails(minutes , title , author);
				
				countOfDVDS++;
			}
			else{
				cout<<"Cannot Add More Then 10 DVDS"<<endl;
			}
		}
		
		void addMagazine(){
			if(countOfMagazines <= 9){
				cout<<"Enter The Name Of The Magazine : ";
				fflush(stdin);
				cin>>title;
				
				cout<<"Enter The Author Name : ";
				fflush(stdin);
				cin>>author;
				
				cout<<"Enter The Publish ID Of Magzine : ";
				cin>>publishID;
				
				magazines[countOfMagazines].setDetails(publishID , title , author);
				
				countOfMagazines++;
			}
			else{
				cout<<"Cannot Add More Then 10 Magazines"<<endl;
			}
		}
		
		// For Searching Products Either it be dvd magazine or book but you need to be knowing the Unique ID
		void SearchItem(){
			int option;
			
			cout<<"Enter The Unique ID From 1 - 30";
			cin>>option;
			
			if(option <= 10){
				
				cout<<books[option-1].getID()<<endl;
				cout<<books[option-1].getAuthor()<<endl;
				cout<<books[option-1].getTitle()<<endl;
				cout<<books[option-1].getPages()<<endl;
			}
			else if(option <= 20){
				cout<<dvd[option-1-10].getID()<<endl;
				cout<<dvd[option-1-10].getAuthor()<<endl;
				cout<<dvd[option-1-10].getTitle()<<endl;
				cout<<dvd[option-1-10].getMinutes()<<endl;
			}
			else if(option <= 30){
				cout<<magazines[option-1-20].getID()<<endl;
				cout<<magazines[option-1-20].getAuthor()<<endl;
				cout<<magazines[option-1-20].getTitle()<<endl;
				cout<<magazines[option-1-20].getIssueNumber()<<endl;
			}
			else{
				cout<<"Wrong Option"<<endl;
			}
			
			
		}
		// deleting any item but you need to be knowing the unique ID 
		
		void deleteItem(int option){
			if(option <= 10){
				
				//deleting to blank spaces to portray that their is nothing
				
				books[option-1].setDetails(0,"----","----");
			}
			else if(option <= 20){
				dvd[option-1-10].setDetails(0,"----","----");
			}
			else if(option <= 30){
				magazines[option-1-20].setDetails("----","----","----");
			}
			else{
				cout<<"Wrong Option"<<endl;
			}
		}

	
		
		
		
};


int main(){
	// Callign Random Things in main just for the sake of showing anything
	
	Library L;
	L.addBook();
	L.addMagazine();
	L.addDVD();
	
	
	L.SearchItem();
	
}