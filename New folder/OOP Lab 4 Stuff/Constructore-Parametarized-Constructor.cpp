#include<iostream>
#include<string.h>

using namespace std;

class Rectangle{
	private:
		int length;
		int width;
		
	public:
		Rectangle(){
			length = 0;
			width = 0;
		}
		
		Rectangle(int l, int w){
			this->length = l;
			this->width = w;
		}
		
		int getLength(){
			return length;
		}
		
	
		int getWidth(){
			return width;
		}
		
		void setLength(int l){
			this->length = l;
		}
		
		void setWidth(int w){
			this->width = w;
		}
		
		int cal_area(){
			return length*width;
		}
};



int main(){
	
	int length,width;
	
	cout<<"Enter the Value Of the Length"<<endl;
	cin>>length;
	cout<<"Enter the Value Of the Width"<<endl;
	cin>>width;
	
	
	Rectangle R1;
	
	R1.setLength(length);
	R1.setWidth(width);
	
	
	cout<<"The Are Of the Rectangle Is : "<<R1.cal_area()<<endl;
	cout<<"The Value OF the Length Is : "<<R1.getLength()<<endl;
	cout<<"The Value Of the Width Is : "<<R1.getWidth();
	
}