#include<iostream>
#include<string.h>
#include<fstream>


using namespace std;
int intakeCounter = 1;
int outcomeCounter = 1;

struct movieData{
	string Title ;
	string Director;
	string yearReleased;
};

movieData createMovieData(movieData M); 
void displayMovieData(movieData N);



int main(){
	
	movieData M1,M2; 
	
	M1 = createMovieData(M1);
	M2 = createMovieData(M2);
	
	
	cout<<"THE MOVIE DATA THAT IS STORED IS BELOW"<<endl;
	cout<<"______________________________________\n\n\n";
	
	
	displayMovieData(M1);
	displayMovieData(M2);
	
	
	return 0;
}


movieData createMovieData(movieData M){
	
	
	
	cout<<"Enter the Title Of the Movie : "<<intakeCounter<<" : "; 
	fflush(stdin); 
	getline(cin,M.Title);
	cout<<endl;
	
	cout<<"Enter the Director Of the Movie : "; 
	fflush(stdin);
	getline(cin,M.Director);
	cout<<endl;
	
	cout<<"Enter the Release Year Of the Movie : "; 
	fflush(stdin);
	getline(cin,M.yearReleased); cout<<endl;
	
	
	cout<<"______________________________________\n\n";
	
	intakeCounter++;
	
	return M;
}

void displayMovieData(movieData N){
	
	cout<<"The Title Of the Movie "<<outcomeCounter<<" Is : "<<N.Title<<endl;
	cout<<"The Director Of the Movie Is : "<<N.Director<<endl;
	cout<<"The Release Year Of the Movie Is : "<<N.yearReleased<<endl;
	
	cout<<"\n______________________________________\n\n\n";
	
	outcomeCounter++;
}