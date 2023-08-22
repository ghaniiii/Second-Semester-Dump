#include<iostream>
#include<string.h>

using namespace std;

class rectangle{
	private:
		int width;
		int height;
		int area;
	public:
		rectangle(int a){
			width = a;
			height = width * 2;
			area = width * height;
		}
		void Display();
};

void rectangle :: Display(){
	cout<<"Width Of the Triangle Is : "<<width<<endl;
	cout<<"Height Of the Triangle Is : "<<height<<endl;
	cout<<"Area Of the Triangle Is : "<<area<<endl;
}


int main(){
	
	int width;
	
	
	cout<<"Welcome To The Rectangle Area Program"<<endl<<endl;
	cout<<"Enter the Width Of the Rectangle : ";
	cin>>width; cout<<endl<<endl;
	
	rectangle R1 = {width};
	R1.Display();
	
	
	
	return 0;
}