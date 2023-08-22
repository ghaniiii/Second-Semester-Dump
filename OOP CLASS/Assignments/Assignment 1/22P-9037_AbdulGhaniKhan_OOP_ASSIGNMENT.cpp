#include<iostream>
#include<string.h>


using namespace std;

int section1StudentCounter = 0;
int section2StudentCounter = 0;
int section3StudentCounter = 0;
int section4StudentCounter = 0;
int section5StudentCounter = 0;


struct student{
	int studentRollNO ;
	string studentName = "------";
	string studentSection = "------";
	string studentPassword = "------";
	
	void displayStudentInfo(){
		cout<<"Student Roll No : "<<studentRollNO<<endl;
		cout<<"Student Name : "<<studentName<<endl;
		cout<<"Student Section : "<<studentSection<<endl;
		cout<<"Student Password : "<<studentPassword<<endl<<endl<<endl;
	}
};


struct section{
	string sectionName = "------";
	int noOfStudents = 0;
	student Students[50];
};

struct csDepartment{
	section Sections[5];
	
	void displaySectionNames(){
		for(int i=0;i<5;i++){
			cout<<"Section "<<i+1<<" Name is : "<<Sections[i].sectionName<<endl;
		}
	}
};


struct admin{
	string adminName = "------";
	string adminDesignation = "------";
	string password = "------";
	
	void displayInfo(){
		cout<<"Admin Name : "<<adminName<<endl;
		cout<<"Admin Designation : "<<adminDesignation<<endl;
		cout<<"Admin Password : "<<password<<endl<<endl;
		
	}
	
	void displayName(){
		cout<<"Admin Name : "<<adminName<<endl;
	}
};


int add_update_viewadmins(admin A[], int size);
int add_update_viewstudents(csDepartment* CS);
int menuDisplay();
bool check_student_username (csDepartment* reference , int rollNo ,int sectionSpecifier);
bool check_student_password(csDepartment* reference , string password , int sectionSpecifier , int loginType2RollNumber);
void setDefaultPasswordForStudents(csDepartment* reference);
void setStudentRollNumbers(csDepartment* reference);
void changeStudentDefaultPassword(csDepartment* reference, int sectionSpecifier , int rollNo);
void displayStudentInfo(csDepartment* reference,int sectionSpecifier,int loginType2RollNumber);


int main(){
	
	char runAgainOrNo;
	
	admin A1[5];
			
	A1[0].adminName = "admin";
	A1[0].password = "admin";
	
	csDepartment CS;
	
	setDefaultPasswordForStudents(&CS);
	
	setStudentRollNumbers(&CS);
	
	do{
	
			
			int loginType;
			string username;
			string password;
			
			
			
			loginType = menuDisplay();
			
			if(loginType==1){
				
				cout<<"Enter Your Username : ";
				fflush(stdin);
				getline(cin,username); cout<<endl;
				
				cout<<"Enter Your Password : ";
				fflush(stdin);
				getline(cin,password); cout<<endl<<endl;
				
				
					if( A1[0].adminName == "admin" && A1[0].password == "admin"){
						
						if(password == "admin" && username == "admin"){
						
							cout<<"______________________________\n"<<endl;
							cout<<"You Must Change Your Password"<<endl;
							cout<<"______________________________\n"<<endl;
							
							cout<<"Enter New Password : ";
							
							fflush(stdin);
							getline(cin,A1[0].password); cout<<endl;
							cout<<"________________________________________\n"<<endl;
							
							cout<<"    Your Password Has Been Changed." <<endl<<endl;
							cout<<"Now Sign In Again With Your New Password "<<endl;
							cout<<"________________________________________\n"<<endl;
						}
					
					}
					
					else if(username == A1[0].adminName && password == A1[0].password || username == A1[1].adminName && password == A1[1].password || username == A1[2].adminName && password == A1[2].password || username == A1[3].adminName && password == A1[3].password || username == A1[4].adminName && password == A1[4].password){
						
						cout<<"  _____________________________________"<<endl;
						cout<<" |                                     |"<<endl;
						cout<<" | Press 1 To Add/Update/View Admins   |"<<endl;
						cout<<" | Press 2 To Add/Update/View Students |"<<endl;
						cout<<" | Press 0 To Logout                   |"<<endl;
						cout<<" |_____________________________________|"<<endl<<endl;
						
						int option2;
						
						cout<<"Your Option : ";
						cin>>option2; cout<<endl;
						
						if(option2 == 1){
							add_update_viewadmins(A1,5);
						}
						else if(option2 == 2){
							add_update_viewstudents(&CS);
						}
					}
					
					else{
						cout<<"Wrong Username Or Password"<<endl;
					}
				
		
			}
			else if(loginType==2){
				
				int loginType2RollNumber;
				int sectionSpecifier;
				
				cout<<"Enter Your RollNumber : ";
				cin>>loginType2RollNumber;
				
				cout<<"Enter Your Password : ";
				fflush(stdin); 
				getline(cin ,password);
				
				cout<<"Enter Section : 1-5 : ";
				cin>>sectionSpecifier; cout<<endl;
					
					if(sectionSpecifier-1 <=4){
				
								bool checkRollNo = false;
								bool checkPassword = false;
								
								checkRollNo = check_student_username(&CS , loginType2RollNumber ,sectionSpecifier);
								checkPassword = check_student_password(&CS ,  password ,sectionSpecifier,loginType2RollNumber);
								
								if(checkRollNo == true && checkPassword ==true){
									 if(CS.Sections[sectionSpecifier-1].Students[loginType2RollNumber-1].studentPassword == "student123"){
									 	changeStudentDefaultPassword(&CS, sectionSpecifier , loginType2RollNumber);
									 	cout<<"_________________________________________________\n"<<endl;
									 	cout<<"Now Login Again As Your Password Has Been Updated "<<endl<<endl;
										cout<<"_________________________________________________\n"<<endl;
									 	
									 }
									 else if(CS.Sections[sectionSpecifier-1].Students[loginType2RollNumber-1].studentPassword != "student123"){
									 	
									 	int studentInfo;
									 										 	
									 	cout<<"Press 1 To Access Your Details \nPress 0 To Logout "<<endl;
									 	cin>>studentInfo; cout<<endl;
									 	
									 	if(studentInfo==1){
									 	
									 			displayStudentInfo(&CS,sectionSpecifier,loginType2RollNumber);
									 
										}
									 }
									 
									 
								}
								else{
									cout<<"Incorrect Credentials Please Try Again With Correct Credentials"<<endl<<endl;
								}
								
					}
					else{
						cout<<"Wrong Section (Section Does Not Exist)"<<endl;
					}
			
				
			}
			
			
		cout<<"Do You Want To Access the Main Login Menu Again ? : y/n  : ";
		cin>>runAgainOrNo; 
		cout<<"_____________________________________________________________\n"<<endl;
			
	}
	while(runAgainOrNo == 'y');
	
	return 0;
}


int menuDisplay(){
			
		int loginType;
		
		cout<<"  _____________________________"<<endl;
		cout<<" |                             |"<<endl;
		cout<<" | Press 1 To Login As Admin   |"<<endl;
		cout<<" | Press 2 To Login As Student |"<<endl;
		cout<<" | Press 3 To Logout           |"<<endl;
		cout<<" |_____________________________|"<<endl<<endl;
			
		cout<<"Enter Your Option : "; 
		cin>>loginType;  cout<<endl;
			
			if(loginType == 1){
				return 1;
			}
			else if(loginType == 2){
				return 2;
			}		
			else if(loginType == 3){
				return 3;
			}
			else {
				cout<<"Wrong Input"<<endl;
			}
			
}


void setDefaultPasswordForStudents(csDepartment* reference){
	for(int i=0;i<5;i++){
		for(int k=0;k<50;k++){
		
			reference->Sections[i].Students[k].studentPassword = "student123";
		
		}
	}
}

void setStudentRollNumbers(csDepartment* reference){
	for(int i=0;i<5;i++){
		for(int k=0;k<50;k++){
			
			reference->Sections[i].Students[k].studentRollNO = k+1;
			
		}
	}
}


void changeStudentDefaultPassword(csDepartment* reference, int sectionSpecifier , int rollNo){
	
	cout<<"_______________________________\n"<<endl;
	cout<<"You Must Change Your Password "<<endl;
	cout<<"_______________________________"<<endl<<endl;
	cout<<"Enter New Password : ";
	fflush(stdin);
	getline(cin, reference->Sections[sectionSpecifier-1].Students[rollNo-1].studentPassword);
	cout<<endl<<endl;
	
	cout<<"Your Password Has Been Updated Successfully !"<<endl;
		 
}


void displayStudentInfo(csDepartment* reference,int sectionSpecifier,int loginType2RollNumber){
	
	reference->Sections[sectionSpecifier-1].Students[loginType2RollNumber-1].displayStudentInfo();

}



int add_update_viewadmins(admin A[], int size){
	A[size];
	int option;
	
	

		
	char yesno;
	
	do{
		
		
		cout<<"The Admins Are As Below :-"<<endl<<endl;
	
		for(int i=0;i<size;i++){
			cout<<"  "<<i+1<<".";
			A[i].displayName();
		}
		
		cout<<endl<<endl;
			
			cout<<"  ___________________________"<<endl;
			cout<<" |                           |"<<endl;
			cout<<" | Press 1 To Add Admins     |"<<endl;
			cout<<" | Press 2 To Update Admins  |"<<endl;
			cout<<" | Press 3 To View Admins    |"<<endl;
			cout<<" | Press 4 To Go Back        |"<<endl;
			cout<<" |___________________________|"<<endl<<endl;
		
			cout<<"Enter Your Option : ";
			cin>>option; cout<<endl;
				
			
			if(option == 1){
				int numberAdmin;
				
				cout<<"You Are Currently Adding An Admin :-"<<endl<<endl;
				cout<<"Enter the Number From The List Above On Which You Want To Add An Admin : ";
				cin>>numberAdmin;
				
				if(numberAdmin-1 < 5){
				
				
					if(A[numberAdmin-1].adminName == "------"){
					
						cout<<"Enter the Name Of the New Admin : ";
						fflush(stdin);
						getline(cin, A[numberAdmin-1].adminName); 
						
						cout<<"Enter the Designation of the New Admin : ";
						fflush(stdin);
						getline(cin, A[numberAdmin-1].adminDesignation); 
						
						cout<<"Enter the Password Of the New Admin : ";
						fflush(stdin);
						getline(cin, A[numberAdmin-1].password); 
					
						
					
					}
					else {
						cout<<"You Cannot Add Another Admin On Top Of An Admin"<<endl<<endl;
					}
				}
				else {
					cout<<"Cannot Add More then 5 Admins"<<endl<<endl;
				}
			}
			
			else if (option == 2){
				
				
				
					int adminNumber;
					string tempName;
					string tempDesig;
					string tempPass;
				
						cout<<"You Are Currently Updating An Admin :-"<<endl<<endl;
						cout<<"Enter the Number From the List Above That You Want To Update : ";
						cin>>adminNumber;
						
						if(adminNumber-1 < 5){
						
							cout<<"Enter Updated Name : ";
							fflush(stdin);
							getline(cin, A[adminNumber-1].adminName);
							
							cout<<"Enter Updated Designation : ";
							fflush(stdin);
							getline(cin, A[adminNumber-1].adminDesignation);
							
							cout<<"Enter Updated Password : ";
							fflush(stdin);
							getline(cin, A[adminNumber-1].password); cout<<endl;
						}
				
						else{
							cout<<"Admin Limit Is 5 Only"<<endl;
						}		
			}
			else if(option == 3){
				
				cout<<"You Are Currently Viewing The Admins Info "<<endl<<endl;
				
					for(int i=0;i<size;i++){
						cout<<i+1<<".";
						A[i].displayInfo();
					}
				
			}

			else if(option == 4){
				return 1;
			}
			
		cout<<"Do You Want To Access the Admin Menu Again ?  y/n : ";
		cin>>yesno; cout<<endl;
			
	}
	while(yesno == 'y' || yesno == 'Y');
			
	return 0;
}



int add_update_viewstudents(csDepartment* reference){
	
	char yesno;
	
	do{
	
			int option;
			
			cout<<"  _________________________________"<<endl;
			cout<<" |                                 |"<<endl;
			cout<<" | Press 1 To Add A Student        |"<<endl;
			cout<<" | Press 2 To Update A Student     |"<<endl;
			cout<<" | Press 3 To View Students        |"<<endl;
			cout<<" | Press 4 To Update Section Names |"<<endl;
			cout<<" | Press 5 To Go Back              |"<<endl;
			cout<<" |_________________________________|"<<endl<<endl;
			
			
			cout<<" Select An Option : ";
			
			cin>>option;
			
			int sectionOption;
			
			if(option == 1){
				
				
				
				cout<<"There Are 5 Sections :-"<<endl<<endl;
				
				reference->displaySectionNames();
				
				cout<<"In Which Section Do You Want To Add A Student ? : 1-5 : ";
				cin>>sectionOption; cout<<endl;
				
				
				if(sectionOption == 1){
			
					cout<<"Enter the Student Name : ";
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section1StudentCounter].studentName); cout<<endl;
					
					cout<<"Enter the Student Password : ";
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section1StudentCounter].studentPassword);  cout<<endl;
					
					reference->Sections[sectionOption-1].Students[section1StudentCounter].studentSection = reference->Sections[sectionOption-1].sectionName;
		
		//			reference->Sections[sectionOption-1].Students[section1StudentCounter].studentRollNO = section2StudentCounter;
					
					section1StudentCounter++;				
					
					
				}
				
				else if(sectionOption == 2){
				
				
					cout<<"Enter the Student Name : ";
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section2StudentCounter].studentName); cout<<endl;
					
					cout<<"Enter the Student Password : ";
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section2StudentCounter].studentPassword); cout<<endl;
			
					reference->Sections[sectionOption-1].Students[section2StudentCounter].studentSection = reference->Sections[sectionOption-1].sectionName;
					
		//			reference->Sections[sectionOption-1].Students[section2StudentCounter].studentRollNO = section2StudentCounter;
					
					section2StudentCounter++;	
				}
				else if(sectionOption == 3){
					cout<<"Enter the Student Name : ";
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section3StudentCounter].studentName); cout<<endl;
					
					cout<<"Enter the Student Password : ";	
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section3StudentCounter].studentPassword); cout<<endl;
			
					reference->Sections[sectionOption-1].Students[section3StudentCounter].studentSection = reference->Sections[sectionOption-1].sectionName;
					
		//			reference->Sections[sectionOption-1].Students[section3StudentCounter].studentRollNO = section3StudentCounter;
					
					section3StudentCounter++;
								
				}
				else if(sectionOption == 4){
					cout<<"Enter the Student Name : ";
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section4StudentCounter].studentName); cout<<endl;
					
					cout<<"Enter the Student Password : ";			 
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section4StudentCounter].studentPassword); cout<<endl;
			
					reference->Sections[sectionOption-1].Students[section4StudentCounter].studentSection = reference->Sections[sectionOption-1].sectionName;
					
		//			reference->Sections[sectionOption-1].Students[section4StudentCounter].studentRollNO = section4StudentCounter;
					
					section4StudentCounter++;
				}
				else if(sectionOption == 5){
					cout<<"Enter the Student Name : ";
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section5StudentCounter].studentName); cout<<endl;
					
					cout<<"Enter the Student Password : ";			  
					fflush(stdin);
					getline(cin, reference->Sections[sectionOption-1].Students[section5StudentCounter].studentPassword); cout<<endl;
			
					reference->Sections[sectionOption-1].Students[section5StudentCounter].studentSection = reference->Sections[sectionOption-1].sectionName;
					
		//			reference->Sections[sectionOption-1].Students[section5StudentCounter].studentRollNO = section5StudentCounter;
					
					section5StudentCounter++;
				}
				else {
					cout<<"Invalid Section There Are Only 5 Sections "<<endl<<endl;
				}
				
				
			}
			
			else if(option == 2){
				
				cout<<"In Which Section Do You Want To Update the Student Info ? : 1-5 : ";
				cin>>sectionOption; cout<<endl;
				
				if(sectionOption <= 5){
				
					int studentRollNumber;
					
					cout<<"On Which Roll Number Do You Want To Update Their Details ? : 1-50 : ";
					cin>>studentRollNumber; cout<<endl;
					
					if(studentRollNumber <= 50){
					
						cout<<"Enter the Updated Name Of the Student : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionOption-1].Students[studentRollNumber-1].studentName); cout<<endl;
						
						cout<<"Enter the Updated Password Of the Student : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionOption-1].Students[studentRollNumber-1].studentPassword); cout<<endl;
						}
					else {
						cout<<"Wrong Roll Number / Roll Number Does Not Exist"<<endl;
					}
				}
				else {
					cout<<"Wrong Section Option / Section Does Not Exist "<<endl;
				}
			
			}
			else if(option == 3){
				cout<<"In Which Section Do You Want To View The Student Info ? : 1-5 : ";
				cin>>sectionOption; cout<<endl;
				
				if(sectionOption <= 5){
		
					for(int i=0;i<50;i++){
						reference->Sections[sectionOption-1].Students[i].displayStudentInfo();
					}
					
				}
				else{
					cout<<"Wrong Section Option / Section Does Not Exist"<<endl;
				}
					
			}
			else if(option == 4){
				
				int sectionNumber;
				char yesno;
				
				do{
				
							
					cout<<"Enter the Section Number That You Want To Update Its Name 1-5 :-"<<endl;
					cin>>sectionNumber; cout<<endl;
					
					if(sectionNumber-1 < 5){
					
						cout<<"Enter the Section Name : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionNumber-1].sectionName); cout<<endl<<endl;
					
					
					//setting the section name for every student that the user updated of the section name
					
						for(int i=0;i<50;i++){
							reference->Sections[sectionNumber-1].Students[i].studentSection = reference->Sections[sectionNumber-1].sectionName;
						}
						
					}
					else{
						cout<<"Wrong Section Number / Section Does Not Exist"<<endl;
					}
					
					cout<<"Do You Want Update Another Section Name ? y/n : ";
					cin>>yesno; cout<<endl;
				}
				while(yesno == 'y' || yesno == 'Y');
			
			}
			else if(option == 5){
				return 1;
			}
			
	 	cout<<"Do You Want To Access The Student Edit Menu Again ? y/n : ";
		cin>>yesno; cout<<endl<<endl;	
	}
	while(yesno == 'y' || yesno == 'Y');
		
	return 0;
}



bool check_student_username (csDepartment* reference , int rollNo , int sectionSpecifier){
	

		for(int i =0;i<50;i++){ 
		
			if(    rollNo == reference->Sections[sectionSpecifier-1].Students[i].studentRollNO    ){
				return true;
			}

		}
		

}

bool check_student_password(csDepartment* reference , string password, int sectionSpecifier , int loginType2RollNumber){
	

			if(   password == reference->Sections[sectionSpecifier-1].Students[loginType2RollNumber-1].studentPassword    ){
				return true;
			}
			else{
				return false;
			}
		
	
}


