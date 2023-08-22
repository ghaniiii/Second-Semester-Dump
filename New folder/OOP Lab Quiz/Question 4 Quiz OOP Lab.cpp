#include<iostream>
#include<string.h>

using namespace std;
//
//Drivers are concerned with the mileage their automobiles get. One driver has
//kept track of several trips by recording the miles driven and gallons used for each tankful. Develop
//a c++ application that will input the miles driven and gallons used (both as integers) for each trip.
//The program should calculate and display the miles per gallon obtained for each trip and print the
//combined miles per gallon obtained for all trips up to this point. All averaging calculations should
//produce floating-point

int main(){
	
	int miles;
	int gallons;
	int trips;
	float milesPerGallons = 0;
	
	cout<<"Enter The Number Of Trips : ";
	cin>>trips;
	
	for(int i=1;i<=trips;i++){
		
		cout<<"FOR TRIP "<<i<<" :-"<<endl<<endl;
		
		cout<<"Enter The Miles Driven In Total : ";
		cin>>miles;
		
		cout<<"Enter The Number Of Gallons Used : ";
		cin>>gallons;
		
		milesPerGallons =  milesPerGallons + (float) miles/gallons;
		
		cout<<endl<<endl;
	}
	
	cout<<"The Miles Per Gallons Is : "<<(float)milesPerGallons/trips<<endl;
	
	return 0;
}