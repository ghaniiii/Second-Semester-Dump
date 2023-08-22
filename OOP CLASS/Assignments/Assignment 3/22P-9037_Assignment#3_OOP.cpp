#include<iostream>
#include<string.h>
#include<fstream>


using namespace std;

int section1StudentCounter = 0;
int section2StudentCounter = 0;
int section3StudentCounter = 0;
int section4StudentCounter = 0;
int section5StudentCounter = 0;


class student{
	
	public:
	
	int studentRollNO ;
	string studentSection = "------";
	string studentPassword = "------";
	string studentName = "------";
	
	void displayStudentInfo(){
		cout<<"Student Roll No : "<<studentRollNO<<endl;
		cout<<"Student Name : "<<studentName<<endl;
		cout<<"Student Section : "<<studentSection<<endl;
		cout<<"Student Password : "<<studentPassword<<endl<<endl<<endl;
	}
};


class section{
	public:
	
	int size = 50;
	string sectionName = "------";
	int noOfStudents = 0;
	student *Students = new student[size];
	
	friend class Director;
	
	void changeStudentNumber(int number){
		
		if(number < size){
			cout<<"You Are About To Loose Some Students As Your Are Reducing The Student Number"<<endl;
			
			student *newStudents = new student[number];
		
			for(int i=0;i<number;i++){
				newStudents[i] = Students[i];
			}
			
			delete[] Students;
			
			Students = newStudents;
			
			size = number;
		}
		
		student *newStudents = new student[number];
		
		for(int i=0;i<size;i++){
			newStudents[i] = Students[i];
		}
		
		delete[] Students;
		
		Students = newStudents;
		
		size = number;
	}
};

class admin{
	public:
	
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
	
	friend class Director;
};

class csDepartment {
	public:
	int adminsize = 5;
	
	admin *Admin = new admin[adminsize];
	
	int size = 5;
	section *Sections = new section[size];
	
	void displaySectionNames(){
		for(int i=0;i<size;i++){
			cout<<"Section "<<i+1<<" Name is : "<<Sections[i].sectionName<<endl;
		}
	}
	
	void changeSectionNumber(int number){
		
		if(number < size){
			cout<<"Some Of The Sections Will Be Lost As You Are Reducing The Section Number"<<endl;
			
			section *newSections = new section[number];
			
			for(int i=0;i<number;i++){
				newSections[i] = Sections[i];
			}
			
			delete[] Sections;
			
			Sections = newSections;
			
			for(int i=0;i<size;i++){
				
				int counter = 1;
				
				for(int j=0;j<Sections[i].size;j++){
					Sections[i].Students[j].studentRollNO = counter;
				}
			}
			
			size = number;
			
		}
		
		section *newSections = new section[number];
		
		for(int i=0;i<size;i++){
			newSections[i] = Sections[i];
		}
		
		delete[] Sections;
		
		Sections = newSections;
		
		for(int i=0;i<size;i++){
			
			int counter = 1;
			
			for(int j=0;j<Sections[i].size;j++){
				Sections[i].Students[j].studentRollNO = counter;
			}
		}
		
		size = number;
	}
	
	void changeAdminNumber(int number){
		
		if(number<adminsize){
			cout<<"You Are About To Loose Some Admins As Your Are Reducing The Admins"<<endl;
			
			admin *newAdmin = new admin[number];
		
			for(int i=0;i<number;i++){
				newAdmin[i] = Admin[i];
			}
			
			delete[] Admin;
			
			Admin = newAdmin;
			
			adminsize = number;
			
			adminsize = number;
			
		}
		
		admin *newAdmin = new admin[number];
		
		for(int i=0;i<adminsize;i++){
			newAdmin[i] = Admin[i];
		}
		
		delete[] Admin;
		
		Admin = newAdmin;
		
		adminsize = number;
		
		adminsize = number;
	}
	
	friend class Director;
};



void add_update_viewadmins(csDepartment *CS);
void add_update_viewstudents(csDepartment* CS);
int menuDisplay();
bool check_student_username (csDepartment* reference , int rollNo ,int sectionSpecifier);
bool check_student_password(csDepartment* reference , string password , int sectionSpecifier , int loginType2RollNumber);
void changeStudentDefaultPassword(csDepartment* reference, int sectionSpecifier , int rollNo);
void displayStudentInfo(csDepartment* reference,int sectionSpecifier,int loginType2RollNumber);
void setStudentRollNumbers(csDepartment* reference);
void setDefaultPasswordForStudents(csDepartment* reference);


bool checkAdminNameAndPassword(csDepartment *CS , string name , string password){
	for(int i=0;i<CS->adminsize;i++){
		if((CS->Admin[i].adminName == name) && (CS->Admin[i].password == password)){
			return true;
		}
	}
	
	return false;
}

class Director{
	string name = "director";
	string password = "director";
	
	public:
		
		string getname(){
			return name;
		}
		
		string getpassword(){
			return password;
		}
		
		void setName(string name){
			this->name = name;
		}
		
		void setPassword(string password){
			this->password = password;
		}
		
		void changeStudentNumber(csDepartment *obj){
			int option;
			
			do{
			
				cout<<"Which Of The Following Do You Want To Change ? "<<endl;
				cout<<"1. Section Numbers"<<endl;
				cout<<"2. Student Number In A Section"<<endl;
				cout<<"3. Max Number Of Admins"<<endl;
				cout<<"4. Go Back "<<endl<<endl;
				
				cout<<"Enter Your Option : ";
				cin>>option;
				
				if(option == 1){
					cout<<"Enter The New Section Number In The Department : ";
					cin>>option;
					
					if(option <= 0){
						cout<<"You Cannot Remove All The Sections "<<endl;
						
					}
					else{
						obj->changeSectionNumber(option);	
					}
					
					
				}
				else if(option == 2){
					int counter = 0;
					int studentNum = 0;
					
					obj->displaySectionNames();
					cout<<endl<<endl;
					
					
					cout<<"Enter The Section Number In Which You Want To Change The Student Numebr : ";
					cin>>option;
					
					for(int i=0;i<obj->size;i++){
						counter++;
					}
					
					if(option <= counter){
						
						cout<<"Enter The New Student Number In The Current Section : ";
						cin>>studentNum;
						
						if(studentNum <= 0){
							cout<<"You Cannot Remove All The Students In The Section"<<endl;
						}
						else{
							obj->Sections[option-1].changeStudentNumber(studentNum);	
						}
						
						
					}
					else{
						cout<<"Wrong Section Number"<<endl;
					}
				}
				else if(option == 3){
					cout<<"Enter The New Admin Number : ";
					cin>>option;
					
					if(option <= 0){
						cout<<"You Cannot Completely Delete All Admins"<<endl;
					}
					else{
						obj->changeAdminNumber(option);
					}
					
				}
				else if(option == 4){
					break;
				}
				else{
					cout<<"Wrong Option"<<endl;
				}
				
				cout<<endl<<endl;
			}
			while(option != 4);
			
		}
		
};

int main(){
	
	char runAgainOrNo;
	
	
	
	csDepartment CS;
	
	setStudentRollNumbers(&CS);
	setDefaultPasswordForStudents(&CS);
	
	CS.Admin[0].adminName = "admin";
	CS.Admin[0].password = "admin";
	
	
	Director D;
	int loginType;
	int option5 = 0;
	int option6 = 0;
	int option7 = 0;
	
	do{
	
			
			
			string username;
			string password;
			
			
			
			loginType = menuDisplay();
			
			if(loginType==1){
				
				
				
				if(option5 == 0){
					cout<<endl<<endl;
					cout<<" ________________________________________"<<endl;
					cout<<"|                                        |"<<endl;
					cout<<"|         Default Name : admin           |"<<endl;
					cout<<"|       Default Password : admin         |"<<endl;
					cout<<"|________________________________________|"<<endl<<endl;
					cout<<endl<<endl;
					
					option5 = -1;
				}
				
			
				
				cout<<"Enter Your Username : ";
				fflush(stdin);
				getline(cin,username); 
				cout<<endl;
				
				cout<<"Enter Your Password : ";
				fflush(stdin);
				getline(cin,password);
				cout<<endl<<endl;
				
				bool checkAdminDetails = false;
				checkAdminDetails = checkAdminNameAndPassword(&CS , username , password);
				
					if( CS.Admin[0].adminName == "admin" && CS.Admin[0].password == "admin"){
						
						if(password == "admin" && username == "admin"){
						
							cout<<"______________________________\n"<<endl;
							cout<<"You Must Change Your Password"<<endl;
							cout<<"______________________________\n"<<endl;
							
							cout<<"Enter New Password : ";
							
							fflush(stdin);
							getline(cin,CS.Admin[0].password); cout<<endl;
							cout<<"________________________________________\n"<<endl;
							
							cout<<"    Your Password Has Been Changed." <<endl<<endl;
							cout<<"Now Sign In Again With Your New Password "<<endl;
							cout<<"________________________________________\n"<<endl;
						}
					
					}
					
					else if(checkAdminDetails == true)
					{
						int option2;
					do{
						
						cout<<"  _________________________________________"<<endl;
						cout<<" |                                         |"<<endl;
						cout<<" | Press 1 To Edit Admins                  |"<<endl;
						cout<<" | Press 2 To Edit Students And Sections   |"<<endl;
						cout<<" | Press 3 To Go Back                      |"<<endl;
						cout<<" |_________________________________________|"<<endl<<endl;
						
						
						
						cout<<"Enter Your Option : ";
						cin>>option2; cout<<endl;
						
						if(option2 == 1){
							add_update_viewadmins(&CS);
						}
						else if(option2 == 2){
							add_update_viewstudents(&CS);
						}
						else if(option2 == 3){
							break;
						}
						else{
						cout<<" ________________________________________"<<endl;
						cout<<"|                                        |"<<endl;
						cout<<"|     Wrong                  Input       |"<<endl;
						cout<<"|________________________________________|"<<endl<<endl;
						
						}
						}
						while(option2 != 3);
					}
					else{
					cout<<" ________________________________________"<<endl;
					cout<<"|                                        |"<<endl;
					cout<<"|     Wrong User Name Or Password        |"<<endl;
					cout<<"|________________________________________|"<<endl<<endl;
					}
					
					
				
		
			}
			else if(loginType==2){
				
				int loginType2RollNumber;
				int sectionSpecifier;
				
				
				
				if(option6 == 0){
					cout<<endl<<endl;
					cout<<" ________________________________________"<<endl;
					cout<<"|                                        |"<<endl;
					cout<<"|    Default Password : student123       |"<<endl;
					cout<<"|________________________________________|"<<endl<<endl;
					cout<<endl<<endl;
					
					option6 = -1;
				}
				
				cout<<"Enter Your RollNumber : ";
				cin>>loginType2RollNumber;
				
				cout<<"Enter Your Password : ";
				fflush(stdin); 
				getline(cin ,password);
				
				cout<<"Enter Section ( 1 - "<<CS.size<<" ) : ";
				cin>>sectionSpecifier; cout<<endl;
					
					if(sectionSpecifier-1 <= CS.size &&sectionSpecifier > 0){
				
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
									 	
									 	do{
										 
										 	
										 	
										 	cout<<" ________________________________________"<<endl;
											cout<<"|                                        |"<<endl;
											cout<<"|        1. To Access Your Details       |"<<endl;
											cout<<"|        0. To Logout                    |"<<endl;
											cout<<"|________________________________________|"<<endl<<endl;
										 	
										 	cout<<"Enter Your Option : ";
										 	cin>>studentInfo; cout<<endl;
										 	
										 	if(studentInfo==1){
										 	
										 			displayStudentInfo(&CS,sectionSpecifier,loginType2RollNumber);
										 
											}
											
										}while(studentInfo != 0);
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
			else if(loginType == 3){
				string name;
				string password;
				
				
				cout<<"You Are In The Director Section :- "<<endl<<endl;
				
				
				
				if(option7 == 0){
					cout<<endl<<endl;
					cout<<" ________________________________________"<<endl;
					cout<<"|                                        |"<<endl;
					cout<<"|         Default Name : director        |"<<endl;
					cout<<"|       Default Password : director      |"<<endl;
					cout<<"|________________________________________|"<<endl<<endl;
					cout<<endl<<endl;
					
					option7 = -1;
				}
				
				cout<<"Enter Your Name : ";
				fflush(stdin);
				getline(cin , name);
				
				cout<<"Enter Your Password : ";
				fflush(stdin);
				getline(cin , password);
				
				cout<<endl<<endl;
				
				if(D.getname() == name && D.getname() == "director" && D.getpassword() == "director" && D.getpassword() == password){
					cout<<"Your Must Change Your Password"<<endl<<endl;
					cout<<"Enter Your New Password : ";
					fflush(stdin);
					getline(cin , password);
					
					D.setPassword(password);
					
					cout<<"_________________________________________________\n"<<endl;
					cout<<"Now Login Again As Your Password Has Been Updated "<<endl<<endl;
					cout<<"_________________________________________________\n"<<endl;
				}
				else if(D.getname() == name && D.getpassword() == password){
					int controller;
					
				do{

					cout<<" _____________________________________________________________"<<endl;
					cout<<"|                                                             |"<<endl;
					cout<<"|   1. Change Any Number Of Students / Sections / Admins      |"<<endl;
					cout<<"|   2. View My Details                                        |"<<endl;
					cout<<"|   3. Edit My Details                                        |"<<endl;
					cout<<"|   4. Go Back                                                |"<<endl;
					cout<<"|_____________________________________________________________|"<<endl<<endl;
					
					cout<<"Enter Your Option : ";
					cin>>controller;
					
					cout<<endl<<endl;
					
					if(controller == 1){
						
						
						D.changeStudentNumber(&CS);	
						
						setStudentRollNumbers(&CS);
						setDefaultPasswordForStudents(&CS);
					}
					else if(controller == 2){
						cout<<"Name : "<<D.getname()<<endl;
						cout<<"Password : "<<D.getpassword()<<endl<<endl;
					}
					else if(controller == 3){
						
					cout<<" ____________________________________"<<endl;
					cout<<"|                                    |"<<endl;
					cout<<"|        1. To Change Name           |"<<endl;
					cout<<"|       2. To Change Password        |"<<endl;
					cout<<"|____________________________________|"<<endl<<endl;
						
						cin>>controller;
						
						if(controller == 1){
							cout<<"Enter New Name :";
							fflush(stdin);
							getline(cin , name);
							
							D.setName(name);
							
							cout<<" __________________________________"<<endl;
							cout<<"|                                  |"<<endl;
							cout<<"|   New Name Saved Successfully    |"<<endl;
							cout<<"|__________________________________|"<<endl<<endl;
						}
						else if(controller == 2){
							cout<<"Enter New Password : ";
							fflush(stdin);
							getline(cin , password);
							
							D.setPassword(password);
							
							cout<<" ______________________________________"<<endl;
							cout<<"|                                      |"<<endl;
							cout<<"|   New Password Saved Successfully    |"<<endl;
							cout<<"|______________________________________|"<<endl<<endl;
						}
						else{
							cout<<" __________________________________"<<endl;
							cout<<"|                                  |"<<endl;
							cout<<"|            Wrong Option          |"<<endl;
							cout<<"|__________________________________|"<<endl<<endl;
						}
					}
					else if(controller == 4){
						break;
					}
					else{
							cout<<" __________________________________"<<endl;
							cout<<"|                                  |"<<endl;
							cout<<"|            Wrong Option          |"<<endl;
							cout<<"|__________________________________|"<<endl<<endl;
					}
					
				}
				while(controller != 4);
			}
			else if(loginType == 4){
				break;
			}
			else{
							cout<<" __________________________________"<<endl;
							cout<<"|                                  |"<<endl;
							cout<<"|      Wrogn Name Or Password      |"<<endl;
							cout<<"|__________________________________|"<<endl<<endl;
			}
			
			
			}
			
	}
	while(loginType != 4);
	
	return 0;
}


int menuDisplay(){
			
		int loginType;
		
		cout<<"  ______________________________"<<endl;
		cout<<" |                              |"<<endl;
		cout<<" | Press 1 To Login As Admin    |"<<endl;
		cout<<" | Press 2 To Login As Student  |"<<endl;
		cout<<" | Press 3 To Login As Director |"<<endl;
		cout<<" | Press 4 To Logout            |"<<endl;
		cout<<" |______________________________|"<<endl<<endl;
			
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
			else if(loginType == 4){
				return 4;
			}
			else {
							cout<<" __________________________________"<<endl;
							cout<<"|                                  |"<<endl;
							cout<<"|            Wrong Input           |"<<endl;
							cout<<"|__________________________________|"<<endl<<endl;
			}
			
			return -1;
}


void setDefaultPasswordForStudents(csDepartment* reference){
	for(int i=0;i<reference->size;i++){
		for(int k=0;k<reference->Sections[i].size;k++){
		
			reference->Sections[i].Students[k].studentPassword = "student123";
		
		}
	}
}

void setStudentRollNumbers(csDepartment* reference){
	for(int i=0;i<reference->size;i++){
		for(int k=0;k<reference->Sections[i].size;k++){
			
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
	
				cout<<" _______________________________________________"<<endl;
				cout<<"|                                               |"<<endl;
				cout<<"|    Password Has Been Updated Successfully     |"<<endl;
				cout<<"|_______________________________________________|"<<endl<<endl;
		 
}


void displayStudentInfo(csDepartment* reference,int sectionSpecifier,int loginType2RollNumber){
	
	reference->Sections[sectionSpecifier-1].Students[loginType2RollNumber-1].displayStudentInfo();

}



void add_update_viewadmins(csDepartment *CS){
	
	int option;
	
	

		
	char yesno;
	
	do{
		
		
		cout<<"The Admins Are As Below :-"<<endl<<endl;
	
		for(int i=0;i<CS->adminsize;i++){
			cout<<"  "<<i+1<<".";
			CS->Admin[i].displayName();
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
				
				if(numberAdmin-1 < CS->adminsize){
				
				
					if(CS->Admin[numberAdmin-1].adminName == "------"){
					
						cout<<"Enter the Name Of the New Admin : ";
						fflush(stdin);
						getline(cin, CS->Admin[numberAdmin-1].adminName); 
						
						cout<<"Enter the Designation of the New Admin : ";
						fflush(stdin);
						getline(cin, CS->Admin[numberAdmin-1].adminDesignation); 
						
						cout<<"Enter the Password Of the New Admin : ";
						fflush(stdin);
						getline(cin, CS->Admin[numberAdmin-1].password); 
					
						
					
					}
					else {
							cout<<" _________________________________________________________________________"<<endl;
							cout<<"|                                                                         |"<<endl;
							cout<<"|           You Cannot Add Another Admin On Top Of Another Admin          |"<<endl;
							cout<<"|_________________________________________________________________________|"<<endl<<endl;
					}
				}
				else {
					cout<<"Admin Limit Is "<<CS->adminsize<<" Only , Though Director Can Change It"<<endl<<endl;
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
						
						if(adminNumber-1 < CS->adminsize){
						
							cout<<"Enter Updated Name : ";
							fflush(stdin);
							getline(cin, CS->Admin[adminNumber-1].adminName);
							
							cout<<"Enter Updated Designation : ";
							fflush(stdin);
							getline(cin, CS->Admin[adminNumber-1].adminDesignation);
							
							cout<<"Enter Updated Password : ";
							fflush(stdin);
							getline(cin, CS->Admin[adminNumber-1].password); cout<<endl;
						}
				
						else{
							cout<<"Admin Limit Is "<<CS->adminsize<<" Only , Though Director Can Change It"<<endl;
						}		
			}
			else if(option == 3){
				
				cout<<"You Are Currently Viewing The Admins Info :-"<<endl<<endl;
				
					for(int i=0;i<CS->adminsize;i++){
						cout<<i+1<<".";
						CS->Admin[i].displayInfo();
					}
				
			}

			else if(option == 4){
				break;
			}
			
		
			
	}
	while(option != 4);
			
	
}



void add_update_viewstudents(csDepartment* reference){
	
	char yesno;
	int option;
	
	do{
	
			
			
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
				
				
				
				cout<<"There Are "<<reference->size<<" Sections :-"<<endl<<endl;
				
				reference->displaySectionNames();
				
				cout<<"In Which Section Do You Want To Add A Student ? ( 1 - "<<reference->size<<" ) : ";
				cin>>sectionOption; cout<<endl;
				
				
				if(sectionOption < reference->size && sectionOption > 0){
					
					if(section1StudentCounter < reference->Sections[sectionOption-1].size){
					
						cout<<"Enter the Student Name : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionOption-1].Students[section1StudentCounter].studentName); cout<<endl;
						
						cout<<"Enter the Student Password : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionOption-1].Students[section1StudentCounter].studentPassword);  cout<<endl;
						
						reference->Sections[sectionOption-1].Students[section1StudentCounter].studentSection = reference->Sections[sectionOption-1].sectionName;
			
			
						
						section1StudentCounter++;			
					}
					else{
							cout<<" ______________________________________________________"<<endl;
							cout<<"|                                                      |"<<endl;
							cout<<"|     Section Is Full You Cannot Add More Students     |"<<endl;
							cout<<"|______________________________________________________|"<<endl<<endl;
					}
					
					
				}
				else{
							cout<<" __________________________________________"<<endl;
							cout<<"|                                          |"<<endl;
							cout<<"|            Wrong Section Number          |"<<endl;
							cout<<"|__________________________________________|"<<endl<<endl;
				}
				
			
			}
			
			else if(option == 2){
				
				cout<<"In Which Section Do You Want To Update the Student Info ?  ( 1 - "<<reference->size<<" ) : ";
				cin>>sectionOption; cout<<endl;
				
				if(sectionOption < reference->size && sectionOption > 0){
				
					int studentRollNumber;
					
					cout<<"On Which Roll Number Do You Want To Update Their Details ? (1 - "<<reference->Sections[sectionOption-1].size<<" ) : ";
					cin>>studentRollNumber; cout<<endl;
					
					if(studentRollNumber <= reference->Sections[sectionOption-1].size && studentRollNumber >= 0){
					
						cout<<"Enter the Updated Name Of the Student : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionOption-1].Students[studentRollNumber-1].studentName); cout<<endl;
						
						cout<<"Enter the Updated Password Of the Student : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionOption-1].Students[studentRollNumber-1].studentPassword); cout<<endl;
						}
					else {
							cout<<" __________________________________________________________"<<endl;
							cout<<"|                                                          |"<<endl;
							cout<<"|       Wrong Roll Number / RollNumber Does Not Exist      |"<<endl;
							cout<<"|__________________________________________________________|"<<endl<<endl;
					}
				}
				else {
							cout<<" __________________________________________________________"<<endl;
							cout<<"|                                                          |"<<endl;
							cout<<"|       Wrong Section Option / Section Does Not Exist      |"<<endl;
							cout<<"|__________________________________________________________|"<<endl<<endl;
				}
			
			}
			else if(option == 3){
				cout<<"In Which Section Do You Want To View The Student Info ? ( 1 - "<<reference->size<<" ) : ";
				cin>>sectionOption; cout<<endl;
				
				if(sectionOption <= reference->Sections[sectionOption-1].size && sectionOption >= 0){
		
					for(int i=0;i<reference->Sections[sectionOption-1].size;i++){
						reference->Sections[sectionOption-1].Students[i].displayStudentInfo();
					}
					
				}
				else{
							cout<<" __________________________________________________________"<<endl;
							cout<<"|                                                          |"<<endl;
							cout<<"|       Wrong Section Option / Section Does Not Exist      |"<<endl;
							cout<<"|__________________________________________________________|"<<endl<<endl;
				}
					
			}
			else if(option == 4){
				
				int sectionNumber;
				char yesno;
				
				do{
				
							
					cout<<"Enter the Section Number That You Want To Update Its Name ( 1 - "<<reference->size<<" ) : ";
					cin>>sectionNumber; cout<<endl;
					
					if(sectionNumber-1 <= reference->size && sectionNumber >= 0){
					
						cout<<"Enter the Section Name : ";
						fflush(stdin);
						getline(cin, reference->Sections[sectionNumber-1].sectionName); cout<<endl<<endl;
					
					
					//setting the section name for every student that the user updated of the section name
					
						for(int i=0;i<reference->Sections[sectionNumber-1].size;i++){
							reference->Sections[sectionNumber-1].Students[i].studentSection = reference->Sections[sectionNumber-1].sectionName;
						}
						
					}
					else{
							cout<<" __________________________________________________________"<<endl;
							cout<<"|                                                          |"<<endl;
							cout<<"|       Wrong Section Option / Section Does Not Exist      |"<<endl;
							cout<<"|__________________________________________________________|"<<endl<<endl;
					}
					
					cout<<"Do You Want Update Another Section Name ? y/n : ";
					cin>>yesno; cout<<endl;
				}
				while(yesno == 'y' || yesno == 'Y');
			
			}
			else if(option == 5){
				break;
			}
			

	}
	while(option != 5);
		
	
}



bool check_student_username (csDepartment* reference , int rollNo , int sectionSpecifier){
	

		for(int i =0;i<reference->Sections[sectionSpecifier-1].size;i++){ 
		
			if(    rollNo == reference->Sections[sectionSpecifier-1].Students[i].studentRollNO    ){
				return true;
			}

		}
		
	return false;
}

bool check_student_password(csDepartment* reference , string password, int sectionSpecifier , int loginType2RollNumber){
	

			if(  password == reference->Sections[sectionSpecifier-1].Students[loginType2RollNumber-1].studentPassword    ){
				return true;
			}
			else{
				return false;
			}
		
	
}


