#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

struct student{
	string name;
	float gpa;
	int marks;
	
};


int main(){
	
	student s[3];
	
	for(int i =0;i<3;i++){
		cout<<"Enter Your Name : "<<endl;
		fflush(stdin);
		getline(cin,s[i].name);
		
		cout<<"Enter Your GPA : "<<endl;
		cin>>s[i].gpa;
		cout<<"Enter Your Marks : "<<endl;
		cin>>s[i].marks;
	}
	
	for(int i=0;i<3;i++){
		cout<<"Your Name : "<<s[i].name<<endl;
		cout<<"Your GPA : "<<s[i].gpa<<endl;
		cout<<"Your Marks : "<<s[i].marks<<endl;
	}
	
	return 0;
}