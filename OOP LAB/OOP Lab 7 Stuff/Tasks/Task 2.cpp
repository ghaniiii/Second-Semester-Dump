//Q No.2: Write the definition for a class called complex that has floating point data members for
//storing real and imaginary parts. The class has the following member functions:
//void set(float, float) to set the specified value in object
//void disp() to display complex number object
//complex sum(complex) to sum two complex numbers & return complex number
//1. Write the definitions for each of the above member functions.
//2. Write main function to create three complex number objects. Set the value in two objects and
//call sum() to calculate sum and assign it in third object. Display all complex numbers.



#include<iostream>
#include<string.h>

using namespace std;

class Complex{
	private:
		float real;
		float imaginary;
		
	public:
		void setBoth(float real , float imaginary){
			this->real = real;
			this->imaginary = imaginary;
		}
		
		void Display(){
			cout<<"Complex Number Is : "<<real<<" + "<<imaginary<<"i"<<endl;
		}
	
		float getReal(){
			return real;
		}
		
		float getImaginary(){
			return imaginary;
		}
};



void sumOfComplexNumber(Complex *arrayOfObjects ){
	
	float realSum , imaginarySum ;
	
	realSum = arrayOfObjects[0].getReal() + arrayOfObjects[1].getReal();
	imaginarySum = arrayOfObjects[0].getImaginary() + arrayOfObjects[1].getImaginary();
	
	arrayOfObjects[3].setBoth(realSum , imaginarySum); 
	
}



int main(){
	
	Complex Objects[3];
	
	float real , imaginary;
	
	char yesno;
	
	do{
	
	
			cout<<"Enter the Real Number For The First Complex Number : ";
			cin>>real;
			
			cout<<"Enter the Imaginary Number For The First Complex Number : ";
			cin>>imaginary; cout<<endl<<endl;
			
			Objects[0].setBoth(real , imaginary);
			
			cout<<"Enter the Real Number For The Second Complex Number : ";
			cin>>real;
			
			cout<<"Enter the Imaginary Number For The Second Complex Number : ";
			cin>>imaginary; cout<<endl<<endl;
			
			Objects[1].setBoth(real , imaginary);
			
			sumOfComplexNumber(Objects);
			
			cout<<"The First Complex Number Is :- "<<endl;
			Objects[0].Display(); cout<<endl;
			
			cout<<"The Second Complex Number Is :- "<<endl;
			Objects[1].Display(); cout<<endl;
			
			
			cout<<"The Sum Of Both The Complex Number Is : "<<endl;
			Objects[3].Display(); cout<<endl;
	
		cout<<"Do You To 2 Other Complex Numbers ? : y/n : ";
		cin>>yesno;
	
	}
	while(yesno == 'y');
	
	
	return 0;
}