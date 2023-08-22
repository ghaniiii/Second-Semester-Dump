#include<iostream>
#include<string.h>

using namespace std;

//keyword // structure name

// how to make array from structure
struct point{
	int x,y;    //structure members
};

int main(){
	
	//array from structure
	point arr[10];
	
	arr[0].x = 10;
	arr[0].y = 20;
	
	cout<<arr[0].x<<endl<<arr[0].y<<endl;
	
	
	return 0;
}