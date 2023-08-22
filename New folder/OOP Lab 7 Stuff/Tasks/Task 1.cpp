//Q No.1: Write the definition for a class called Rectangle that has floating point data members
//length and width. The class has the following member functions:
//void setlength(float) to set the length data member
//void setwidth(float) to set the width data member
//float perimeter() to calculate and return the perimeter of the rectangle
//float area() to calculate and return the area of the rectangle
//void show() to display the length and width of the rectangle
//int sameArea(Rectangle) that has one parameter of type Rectangle. sameArea returns 1 if the
//two Rectangles have the same area, and returns 0 if they don&#39;t.
//1. Write the definitions for each of the above member functions.
//2. Write main function to create two rectangle objects. Set the length and width of the first
//rectangle to 5 and 2.5. Set the length     and width of the second rectangle to 5 and 18.9. Display
//each rectangle and its area and perimeter.
//
//3. Check whether the two Rectangles have the same area and print a message indicating the
//result. Set the length and width of the     first rectangle to 15 and 6.3. Display each Rectangle and
//its area and perimeter again. Again, check whether the two     Rectangles have the same area and
//print a message indicating the result.

#include<iostream>
#include<string.h>

using namespace std;

class Rectangle{
	private:
		float length;
		float width;
		
	public:
		void setLength(float length){
			this->length = length;
		}
		void setWidth(float width){
			this->width = width;
		}
		void setlength(float length){
			this->length = length;
		}
		float getParameter(){
			return (2*length + 2*width);
		}
		float getArea(){
			return width*length;
		}
		void displayWidthLength(){
			cout<<"Width Is : "<<width<<endl;
			cout<<"Length Is : "<<length<<endl;
		}
		float getWidth(){
			return width;
		}
		float getLength(){
			return length;
		}
		
};

int sameArea(Rectangle *R1 ,  Rectangle *R2){
	
	if(R1->getArea() == R2->getArea()){
		return 1;
	}
	else{
		return 0;
	}
	
}

void displayAll(Rectangle *reference1 , Rectangle *reference2){
	
	cout<<"   _______________________________"<<endl;
	cout<<"  |                               |"<<endl;
	cout<<"  |   YOU ARE DISPLAYING DATA :-  |"<<endl;
	cout<<"  |_______________________________|"<<endl<<endl;
	
	cout<<"  Length Of Triangle 1 Is : "<<reference1->getLength()<<endl;
	cout<<"  Width Of Triangle 1 Is : "<<reference1->getWidth()<<endl<<endl;
	
	cout<<"  Area Of the Triangle 1 Is : "<<reference1->getArea()<<endl;
	cout<<"  Parameter Of the Triangle 1 Is : "<<reference1->getParameter()<<endl<<endl;
	
	cout<<"  Length Of Triangle 2 Is : "<<reference2->getLength()<<endl;
	cout<<"  Width Of the Triangle 2 Is : "<<reference2->getWidth()<<endl<<endl;
	
	cout<<"  Area Of the Triangle 2 Is : "<<reference2->getArea()<<endl;
	cout<<"  Parameter Of the Triangle 2 Is : "<<reference2->getParameter()<<endl<<endl;	
	
}

int main(){
	
	
	Rectangle R1 , R2;
	
	
	float R1Length , R1Width , R2Length , R2Width;
	char choice;
	int returnFromSameArea;	
	char yesno;
	
	
	
	
	do{

			cout<<"   _____________________________________________________________"<<endl;
			cout<<"  |                                                             |"<<endl;
			cout<<"  |     YOU ARE ENTERING THE DATA FOR THE FIRST RECTANGLE :-    |"<<endl;
			cout<<"  |_____________________________________________________________|"<<endl<<endl;
			
			cout<<"  Enter the Length Of the First Rectangle : ";
			cin>>R1Length;
			
			cout<<"  Enter the Width Of the First Rectangle : ";
			cin>>R1Width; cout<<endl;
			
			R1.setLength(R1Length);
			R1.setWidth(R1Width);
			
			cout<<"  ____________________________________________________________"<<endl;
			cout<<" |                                                            |"<<endl;
			cout<<" |  YOU ARE ENTERING THE DATA FOR THE SECOND RECTANGLE NOW :- |"<<endl;
			cout<<" |____________________________________________________________|"<<endl<<endl;
			
			cout<<"  Enter the Length Of the Second Triangle : ";
			cin>>R2Length;
			
			cout<<"  Enter the Widht Of the Second Triangle : ";
			cin>>R2Width;  cout<<endl<<endl;
			
			R2.setLength(R2Length);
			R2.setWidth(R2Width);	
			
			
			displayAll( &R1 , &R2);
			
			cout<<"  Do You Want To Check The Area If They Are Same Or Not ? y/n : ";
			cin>>choice;
			
			if(choice == 'y' || choice == 'Y'){
				
				returnFromSameArea = sameArea( &R1 , &R2 );
				
				if(returnFromSameArea == 1 ){
					cout<<"  ___________________________________________"<<endl;
					cout<<" |                                           |"<<endl;
					cout<<" |   THE TWO TRIANGLES ARE SAME IN AREA      |"<<endl;
					cout<<" |___________________________________________|"<<endl<<endl;
				}		
				else if(returnFromSameArea == 0){
					cout<<" ___________________________________________"<<endl;
					cout<<"|                                           |"<<endl;
					cout<<"|  THE TWO RECTANGLES ARE NOT SAME IN AREA  |"<<endl;
					cout<<"|___________________________________________|"<<endl<<endl;
				}
					
			}
		
		
		cout<<"  Do You Want To Access The Programme Again To Check Again ? ";
		cin>>yesno;  cout<<endl<<endl;
		
		
			
	}
	while(yesno == 'y' || yesno == 'Y');
	
	
}