#include<iostream>
#include<string.h>

using namespace std;

class GeneralDetails{
	
	string Nationality;
	string Age;
	string TotalVisaExpenses;
	string MinimumTravelled;
	string Language;
	public:
	
		GeneralDetails(string Nationality , string Age , string VisaExpenses , string MinimumTravelled , string Language){
			this->Nationality = Nationality;
			this->Age = Age;
			this->TotalVisaExpenses = VisaExpenses;
			this->MinimumTravelled = MinimumTravelled;
			this->Language = Language;
		}
		
		void printDetails(){
			cout<<"              Nationals Allowed : "<<Nationality<<endl;
			cout<<"              Minimum Age Required In Years : "<<Age<<endl;
			cout<<"              Total Expenses Of Visa : "<<TotalVisaExpenses<<endl;
			cout<<"              Minimum Travelled Countries : "<<MinimumTravelled<<endl;
			cout<<"              Language Necessary : "<<Language<<endl;
		}
	
	
};


class USA{
	GeneralDetails USA1;
	string Country = "United States Of America";
	
	public:
		USA(string nationality = "ALL" , string Age = "12", string VisaExpenses = "$25000", string MinimumTravelled = "4 Countries", string Language = "English") 
		: USA1(nationality , Age , VisaExpenses , MinimumTravelled , Language){}
		
		void printUSADetails(){
			cout<<"              Country Name : "<<Country<<endl;
			USA1.printDetails();
		}
		
		void printCountryNameOnly(){
			cout<<Country<<endl;
		}
		
};

class Japan{
	GeneralDetails Japan2;
	string Country = "Japan";
	
	public:
		Japan(string nationality = "ALL" , string Age = "15", string VisaExpenses = "$16000", string MinimumTravelled = "2 Countries", string Language = "English / Japanese")
		: Japan2(nationality , Age , VisaExpenses , MinimumTravelled , Language){}
		
		void printJapanDetails(){
			cout<<"              Country Name : "<<Country<<endl;
			Japan2.printDetails();
		}
		
		void printCountryNameOnly(){
			cout<<Country<<endl;
		}
};

class Australia{
	GeneralDetails Australia3;
	string Country = "Australia";
	
	public:
		Australia(string nationality = "ALL" , string Age = "18", string VisaExpenses = "$36000", string MinimumTravelled = "8 Countries", string Language = "English / Dutch")
		: Australia3(nationality , Age , VisaExpenses , MinimumTravelled , Language){}
		
		void printAustraliaDetails(){
			cout<<"              Country Name : "<<Country<<endl;
			Australia3.printDetails();
		}
		
		void printCountryNameOnly(){
			cout<<Country<<endl;
		}
};

class Canada{
	GeneralDetails Canada4;
	string Country = "Canada";
	
	public:
		Canada(string nationality = "ALL" , string Age = "5", string VisaExpenses = "$35000", string MinimumTravelled = "3 Countries", string Language = "English / French")
		: Canada4(nationality , Age , VisaExpenses , MinimumTravelled , Language){}
		
		void printCanadaDetails(){
			cout<<"              Country Name : "<<Country<<endl;
			Canada4.printDetails();
		}
		
		void printCountryNameOnly(){
			cout<<Country<<endl;
		}
};

class UAE{
	GeneralDetails UAE5;
	string Country = "United Arab Emirates";
	
	public:
		UAE(string nationality = "ALL" , string Age = "18", string VisaExpenses = "$5000", string MinimumTravelled = "0 Countries", string Language = "English / Arabic")
		: UAE5(nationality , Age , VisaExpenses , MinimumTravelled , Language){}
		
		void printUAEDetails(){
			cout<<"              Country Name : "<<Country<<endl;
			UAE5.printDetails();
		}
		
		void printCountryNameOnly(){
			cout<<Country<<endl;
		}
};

class UK{
	GeneralDetails UK6;
	string Country = "United Kingdom";
	
	public:
		UK(string nationality = "ALL" , string Age = "20", string VisaExpenses = "$46000", string MinimumTravelled = "7 Countries", string Language = "English / French / Russian")
		: UK6(nationality , Age , VisaExpenses , MinimumTravelled , Language){}
		
		void printUKDetails(){
			cout<<"              Country Name : "<<Country<<endl;
			UK6.printDetails();
		}
		
		void printCountryNameOnly(){
			cout<<Country<<endl;
		}
};

class VisaDetails{
	string CountriesAvailable = "6 Countries Available In Our Info Application \n              Till Now";
	USA Country1;
	Japan Country2;
	Australia Country3;
	Canada Country4;
	UAE Country5;
	UK Country6;
	
	public:
		VisaDetails(){
			
		}
		
		void Countries(){
			cout<<"              There Are : "<<CountriesAvailable<<endl;
			
		}
		
		void printCountry1Details(){
			Country1.printUSADetails();
		}
		
		void printCountry2Details(){
			Country2.printJapanDetails();
		}
		
		void printCountry3Details(){
			Country3.printAustraliaDetails();
		}
		
		void printCountry4Details(){
			Country4.printCanadaDetails();
		}
		
		void printCountry5Details(){
			Country5.printUAEDetails();
		}
		
		void printCountry6Details(){
			Country6.printUKDetails();
		}
		
		void printAllCountryNames(){
			cout<<"              1. ";Country1.printCountryNameOnly();
			cout<<"              2. ";Country2.printCountryNameOnly();
			cout<<"              3. ";Country3.printCountryNameOnly();
			cout<<"              4. ";Country4.printCountryNameOnly();
			cout<<"              5. ";Country5.printCountryNameOnly();
			cout<<"              6. ";Country6.printCountryNameOnly();
		}
		
};



int main(){
	
	VisaDetails List;
	int option;
	char option2;
	
	cout<<"               _________________________________________________"<<endl;
	cout<<"              |                                                 |"<<endl;
	cout<<"              |   WELCOME TO OUR VISA INFORMATION APPLICATION   |"<<endl;
	cout<<"              |_________________________________________________|"<<endl<<endl<<endl;
	
	
	do{

	
			cout<<"              We Have The Following Countries Info Till Now :-"<<endl<<endl;
			List.Countries(); cout<<endl<<endl;
			List.printAllCountryNames(); cout<<endl<<endl;
			cout<<"              _________________________________________________"<<endl<<endl;
			
			cout<<"              Enter Your Desired Number For The Country Info That You \n              Want To Retrieve (1-6): ";
			cin>>option;
			cout<<endl<<endl;
			cout<<"              _________________________________________________"<<endl<<endl;
			
			if(option == 1){
				List.printCountry1Details();
				cout<<endl<<endl;
				cout<<"              _________________________________________________"<<endl<<endl;
			}
			else if(option == 2){
				List.printCountry2Details();
				cout<<endl<<endl;
				cout<<"              _________________________________________________"<<endl<<endl;
			}
			else if(option == 3){
				List.printCountry3Details();
				cout<<endl<<endl;
				cout<<"              _________________________________________________"<<endl<<endl;
			}
			else if(option == 4){
				List.printCountry4Details();
				cout<<endl<<endl;
				cout<<"              _________________________________________________"<<endl<<endl;
			}
			else if(option == 5){
				List.printCountry5Details();
				cout<<endl<<endl;
				cout<<"              _________________________________________________"<<endl<<endl;
			}
			else if(option == 6){
				List.printCountry6Details();
				cout<<endl<<endl;
				cout<<"              _________________________________________________"<<endl<<endl;
			}
			else{
				cout<<"              Wrong Input Please Try Again With The Right Input ..."<<endl<<endl;
				cout<<"              _________________________________________________"<<endl<<endl;
			}
		
		cout<<"              Do You Want To Access The Menu Again ? y/n : ";
		cin>>option2;	
		cout<<"              _________________________________________________"<<endl<<endl<<endl;
		
	}
	while(option2 == 'y' || option2 == 'Y');
	
	
	return 0;
}