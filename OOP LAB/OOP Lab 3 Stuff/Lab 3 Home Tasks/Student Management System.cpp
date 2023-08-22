#include<iostream>
#include<string.h>

using namespace std;

struct studentData{
	string name;
	float courcesMarks[3];
	
};


void displayData(studentData Display);
void calcAverageMarks(studentData Marks);
studentData changeMarks(studentData change);


int main(){
	
	studentData S[2];
	
	for(int i=0;i<2;i++){
	
		cout<<"Enter the Student "<<i+1<<" Data As Below :-"<<endl<<endl;
		cout<<"Enter the Name : "; 
		fflush(stdin);
		getline(cin,S[i].name);
		
			for(int k=0;k<3;k++){
				cout<<"Enter The Course Marks: "<<k+1<<" : ";
				cin>>S[i].courcesMarks[k];
			}
		
		cout<<"\n\n";
	}
	
	cout<<"\n\n\n";
	
	
	int Option;
	int notValid;
	int studentNumber;
	char choiceyn;

	do{
		
			cout<<"Menu :-"<<endl<<endl;
			cout<<"1. Display Student Data"<<endl;
			cout<<"2. Calculate Average Marks"<<endl;
			cout<<"3. Change Marks"<<endl<<endl<<endl;
		
		cout<<"Please Select An Option : "; cin>>Option;
		
		if(Option == 1){
			
			cout<<"You Are Accessing Option 1, Display Student Data "<<endl<<endl;
			
			for(int i=0;i<2;i++){
				displayData(S[i]);
				cout<<"\n\n";
			}
			
		}
		else if(Option == 2){
			
			cout<<"You Are Accessing Option 2, Calculating Average Marks "<<endl<<endl;
			
			cout<<"Please Select Student Number : ";
			cin>>studentNumber;
			
			if(studentNumber <= 2){
			
			studentNumber = studentNumber - 1;
			calcAverageMarks(S[studentNumber]);
			
			}
			else {
				cout<<"Student Does Not Exits "<<endl;
			}
			
		}
		else if(Option == 3){
			
			cout<<"You Are Accessing Option 3, Changing Marks "<<endl;
			
			cout<<"Please Enter the Student Number : ";
			
			cin>>studentNumber;
			
			if(studentNumber <=2){
			
			studentNumber = studentNumber - 1;
		    S[studentNumber] = changeMarks(S[studentNumber]);
		    
			}
			else {
				cout<<"No Student Exist "<<endl;
			}
		}
		else{
			cout<<"Invalid Option"<<endl<<endl;
		} 
		
			cout<<"Do You Want To Access The Menu Again ? y/n : ";
			cin>>choiceyn; cout<<"\n\n";
	}
	while(choiceyn == 'y');

	
	
	
	return 0;
}





void displayData(studentData Display){
	cout<<"Student Name : "<<Display.name<<endl;
	
	for(int i=0;i<3;i++){
		cout<<"Student Marks For Cource : "<<i+1<<" : " << Display.courcesMarks[i] <<endl;
	}
}



void calcAverageMarks(studentData Marks){
	
	int sum;
	
	for(int i=0;i<3;i++){
		sum = sum + Marks.courcesMarks[i];
	}	
	
	float averageMarks = sum/3.0;
	
	cout<<"The Average Marks Are : "<<averageMarks<<endl<<endl;
}



studentData changeMarks(studentData change){
	int courseNumber;
	float updatedMarks;
	
	cout<<"Enter the Course Number To Change Marks Of : "; cin>>courseNumber;
	if(courseNumber<=3){
	
		cout<<"Enter the Updated Marks : "; cin>>updatedMarks;
		change.courcesMarks[courseNumber-1] = updatedMarks;
	}
	else {
		cout<<"Course Number Is Only From 1-3 Only"<<endl;
	}
	return change;
}
