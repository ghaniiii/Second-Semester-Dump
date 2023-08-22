#include <iostream>
using namespace std;

int main() {
   int miles;
    int gallons; 
	int totalMiles = 0;
	int totalGallons = 0;
   float milesPerGallon, totalMilesPerGallon;
	int trips;
	
	cout<<"________________________________________________"<<endl<<endl;
	
	cout<<"Enter The Number Of Trips : ";
	cin>>trips;

   for(int i=1;i<=trips;i++){
   	
   		cout<<"________________________________________________"<<endl<<endl;
   	
	      cout << "Enter Miles Driven In This Trip : ";
	      cin >> miles;
			
			cout<<endl<<endl;	
		
	      if (miles == -1) {
	         break;
	      }
	
	      cout << "Enter Gallons Used In This Trip: ";
	      cin >> gallons;
			
			cout<<endl<<endl;
			
	      milesPerGallon = miles / gallons;
	      
	      totalMiles = totalMiles + miles;
	      
	      totalGallons = totalGallons + gallons;
	      
	      totalMilesPerGallon = totalMiles / totalGallons;
	
	      cout << "Total Miles Per Gallon In This Trip Are : " << milesPerGallon << endl;
	      cout << "Total Miles Per Gallon Are: " << totalMilesPerGallon << endl;
	      
	      cout<<"________________________________________________"<<endl<<endl;
   }

   return 0;
}