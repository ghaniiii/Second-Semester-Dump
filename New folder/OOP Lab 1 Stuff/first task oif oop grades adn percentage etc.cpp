// Assignment take 6 subject marks , calculate percentage and check condition if the user has
// 80 to 100 give a grade  then b and c respectively , and print them

#include<iostream>
#include<string.h>


using namespace std;

int main(){
	
	int calculus;
	int ict;
	int pakstudies;
	int pf_lab;
	int pf;
	int ict_lab;
	int physics;
	
	float total_marks = 700.0; 
	
	cout<<"Enter PF Marks : ?/100 : "; cin>>pf; cout<<endl;
	cout<<"Enter Calculus Marks : ?/100 : "; cin>>calculus; cout<<endl;
	cout<<"Enter PF Lab Marks : ?/100 : "; cin>>pf_lab; cout<<endl;
	cout<<"Enter Applied Physics Marks : ?/100 : "; cin>>physics; cout<<endl;
	cout<<"Enter ICT Marks : ?/100 : "; cin>>ict; cout<<endl;
	cout<<"Enter ICT Lab Marks : ?/100 : "; cin>>ict_lab; cout<<endl;
	cout<<"Enter Pak Studies Marks : ?/100 : "; cin>>pakstudies; cout<<endl;
	
	cout<<"_______________________________________________________"<<endl<<endl<<endl;
	
	int obtained_marks = calculus + ict + pakstudies + pf_lab + pf + ict_lab + physics ;
	float percentage =  (obtained_marks/total_marks)*100;
	
	cout<<"Your Percentage Is : "<<percentage<<"%"<<endl<<endl;
	
	char grade;
	
	if(percentage >=85){
		grade = 'A';
	}
	else if(percentage >= 70){
		grade = 'B';
	}
	else if(percentage >= 60){
		grade = 'C';
	}
	else{
		grade = 'F';
	}
	
	
	cout<<"Your Grade Is : "<<grade<<endl<<endl;
	
	return 0;
}