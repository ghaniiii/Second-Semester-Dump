#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;


//Question 02:
//Write method distance to calculate the distance between two
//points (x1, y1) and (x2, y2). All numbers and return values should be of type double. Incorporate
//this method into an application that enables the user to enter the coordinates of the points.
//
//sqrt()

int main(){
	
	double x1 , y1 , x2 , y2;
	
	cout<<"Enter The X1 Value : ";
	cin>>x1;
	
	cout<<"Enter The Y1 Value : ";
	cin>>y1;
	
	cout<<"Enter The X2 Value : ";
	cin>>x2;
	
	cout<<"Enter The Y2 Value : ";
	cin>>y2;
	
	fflush(stdin);
	double distance = (double) sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
	
	cout<<"The Distance Is : "<<distance<<endl;
	
	
	
	
	
	return 0;
}