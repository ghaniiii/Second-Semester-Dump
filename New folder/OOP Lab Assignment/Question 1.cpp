
	
	
#include<iostream>
#include<string.h>

using namespace std;

class Rectangle2;
class Rectangle3;
class Rectangle4;



class Rectangle1{
	int length;
	int breadth;
	
	public:
		Rectangle1(int length , int breadth){
			this->length = length;
			this->breadth = breadth;
		}
		
		friend void sum(Rectangle1 *R1 , Rectangle2 *R2 , Rectangle3 *R3 , Rectangle4 *R4);
};

class Rectangle2{
	int length;
	int breadth;
	
	public:
		Rectangle2(int length , int breadth){
			this->length = length;
			this->breadth = breadth;
		}
		
		friend void sum(Rectangle1 *R1 , Rectangle2 *R2 , Rectangle3 *R3 , Rectangle4 *R4);	
};

class Rectangle3{
	int length;
	int breadth;
	
	public:
		Rectangle3(int length , int breadth){
			this->length = length;
			this->breadth = breadth;
		}
		
		friend void sum(Rectangle1 *R1 , Rectangle2 *R2 , Rectangle3 *R3 , Rectangle4 *R4);
};

class Rectangle4{
	int length;
	int breadth;
	
	public:
		Rectangle4(int length , int breadth){
			this->length = length;
			this->breadth = breadth;
		}
		
		friend void sum(Rectangle1 *R1 , Rectangle2 *R2 , Rectangle3 *R3 , Rectangle4 *R4);	
};


void sum(Rectangle1 *R1 , Rectangle2 *R2 , Rectangle3 *R3 , Rectangle4 *R4){
	
	cout<<endl<<endl;
	
	cout<<"                      Length    Breadth"<<endl;
	cout<<"Rectangle 1     :       "<<R1->length<<"          "<<R1->breadth<<endl;
	cout<<"Rectangle 2     :       "<<R2->length<<"          "<<R2->breadth<<endl;
	cout<<"Rectangle 3     :       "<<R3->length<<"          "<<R3->breadth<<endl;
	cout<<"Rectangle 4     :       "<<R4->length<<"          "<<R4->breadth<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"          Sum   :       "<<R1->length + R2->length + R3->length + R4->length<<"          "<<R1->breadth + R2->breadth + R3->breadth + R4->breadth<<endl;
	cout<<"----------------------------------------------------"<<endl;
}


int main(){
	
	int length , breadth ;
	
	cout<<"Enter The Length Of Rectangle 1 : ";
	cin>>length;
	cout<<"Enter The Breadth Of Rectangle 1 : ";
	cin>>breadth;
	
	Rectangle1 R1(length , breadth);
	
	cout<<"Enter The Length Of Rectangle 2 : ";
	cin>>length;
	cout<<"Enter The Breadth Of Rectangle 2 : ";
	cin>>breadth;
	
	Rectangle2 R2(length , breadth);
	
	cout<<"Enter The Length Of Rectangle 3 : ";
	cin>>length;
	cout<<"Enter The Breadth Of Rectangle 3 : ";
	cin>>breadth;
	
	Rectangle3 R3(length , breadth);
	
	cout<<"Enter The Length Of Rectangle 4 : ";
	cin>>length;
	cout<<"Enter The Breadth Of Rectangle 4 : ";
	cin>>breadth;
	
	Rectangle4 R4(length , breadth);	
	
	sum(&R1 , &R2 , &R3 , &R4);
	
	
	return 0;

	
}