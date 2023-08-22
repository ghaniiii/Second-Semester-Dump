#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;


int main(){
	
	string line;
	ofstream fout;
	
	fout.open("E:\File Handling\\FirstFileHandling.txt");
	
	while(true){
		cout<<"Enter The Data For the Line : "<<endl;
		getline(cin , line);
		
		if(line != "-1"){
			fout<<line<<endl;
		}
		else{
			break;
		}
		
	}
	
	
	fout.close();
	
	fstream fin;
	fin.open("E:\File Handling\\FirstFileHandling.txt");
	fflush(stdin);
	while(getline(fin , line)){
		cout<<line;
		
		fflush(stdin);
	}
	
	
	fin.close();
	
	
	
	
	return 0;
}