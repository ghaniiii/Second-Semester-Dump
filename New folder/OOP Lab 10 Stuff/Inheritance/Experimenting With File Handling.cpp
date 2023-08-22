#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main(){
	
	string line;
	
	
	
	ofstream fout;
	
	fout.open("E:\File Handling\\Experimenting.txt");
	
	while(true){
		
		cout<<"Enter the Line That You Want To Save in the File :-"<<endl;
		fflush(stdin);
		getline(cin , line);
		
		if(line != "-1"){
			fout<<line;
		}
		else{
			break;
		}
	}
	
	fout.close();
	
	fstream check;
	
	check.open("E:\File Handling\\Experimenting.txt");
	
	fflush(stdin);
	
	string lineCheck;
	cout<<"Enter the Line That You Want To Check"<<endl;
	fflush(stdin);
	getline(cin , lineCheck);
	
	while(getline(check , line)){
		if(lineCheck == line){
			cout<<"Line Found It Is As Below :-"<<endl<<endl;
			cout<<line<<endl<<endl;
		}
		else{
			cout<<"Line Not Found"<<endl<<endl;
		}
	}
	
	
	
	
	
	return 0;
}