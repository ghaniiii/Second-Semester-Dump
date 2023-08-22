// Next Assignment Take age from user for eg 25 , condition if 25 or greater then 25 then true
// check married if married then true and unmarried then untrue ,  take bolian data type;
// IF doing job then true if not then false 
// If atleast 1 fails then fail and print for that you are ineligible if eligible then say eligible; 

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int age;
	char marriage_status;
	char job_status;
	bool age_check;
	bool marriage_check;
	bool job_check;
	
	cout<<"Enter You Age : ";
	cin>>age; cout<<endl;
	
	cout<<"Are You Married ? y/n : ";
	cin>>marriage_status; cout<<endl;
	
	cout<<"Are You Currently Employed ? y/n : ";
	cin>>job_status; cout<<endl;
	
	cout<<"____________________________________________________________________________________________"<<endl<<endl<<endl;
	
	
	if(age >= 25){
		age_check = true ;
	}
	else{
		age_check = false ;
	}
	
	if(marriage_status == 'y' || marriage_status == 'Y'){
		marriage_check = true;
	}
	else {
		marriage_check = false;
	}
	
	if(job_status == 'y' || job_status == 'Y'){
		
		job_check = false ;
	}
	else{
		job_check =  true ;
	}
	
	
	if(job_check == true && marriage_check == true && age_check ==  true){
		cout<<"You Are Eligible For the Job , Congratulations"<<endl;
	}
	else if(job_check == true && marriage_check == true && age_check == false){
		cout<<"You Are Ineligible for the Job Requirements , Your Age Requirements Does Not Meet"<<endl;
	}
	else if(job_check == false && marriage_check == true && age_check == true){
		cout<<"You Are Ineligible for the Job Requirements , You Already Have A Job "<<endl;
	}
	else if(job_check == true && marriage_check == false && age_check == true){
		cout<<"You Are Ineligible for the Job Requirements , You Are Unmarried "<<endl;
	}
	else if(job_check ==  false && marriage_check == false && age_check == true){
		cout<<"You Are Ineligible for the Job Requirements , You Dont Meet Any Of the Requirements for the Job"<<endl;
	}
	else if(job_check == false && marriage_check == false && age_check == true){
		cout<<"You Are Ineligible for the Job Requirements , You Are Unmarried And Already Employed "<<endl;
	}
	else if(job_check == false && marriage_check == true && age_check == false){
		cout<<"You Are Ineligible for the Job Requirements , You Are Less Then 25 Years Of Age And Already Have A Job"<<endl;
	}
	else if(job_check == true && marriage_check == false && age_check == false){
		cout<<"You Are Ineligible for the Job Requirements, You Are Unmarried And Less Then 25 Years Of Age "<<endl;
	}
	
	
	return 0;
}