#include<iostream>
#include<string.h>

using namespace std;


class Complex{
	float real;
	float imaginary;
	
	public:
		Complex(float real , float imaginary ) : real(real) , imaginary(imaginary) {}
		
		float getRealPart(){
			return real;
		}
		
		float getImaginaryPart(){
			return imaginary;
		}
		
		void setRealPart(float real){
			this->real = real;
		}
		
		void setImaginaryPart(float imaginary){
			this->imaginary = imaginary;
		}
		
		
		void displayComplexNumber(){
			cout<<real<<" + "<<imaginary<<" i "<<endl;
		}
		
		
		
};

class Operations{
	public:
		Complex Add(Complex *C1 , Complex *C2){
			
			
			Complex C3(C1->getRealPart() + C2->getRealPart() , C1->getImaginaryPart() + C2->getImaginaryPart());
			
			return C3;
		}
		
		Complex Subtract(Complex *C1 , Complex *C2){
			Complex C3(C1->getRealPart() - C2->getRealPart() , C1->getImaginaryPart() - C2->getImaginaryPart());
			
			return C3;
		}
};



int main(){
	
	Complex C1(1 , 3);
	Complex C2(3 , 1);
	
	cout<<"The First Complex Number Is : ";
	C1.displayComplexNumber();
	
	cout<<endl;
	
	cout<<"The Second Complex Number Is : ";
	C2.displayComplexNumber();
	
	cout<<endl<<endl;
	
    Operations O;
    Complex Sum = O.Add(&C1 , &C2);
	Complex Subtraction = O.Subtract(&C1 , &C2);
	
	cout<<"Their Sum Is : ";
	Sum.displayComplexNumber();
	
	cout<<"Their Subtract Is : ";
	Subtraction.displayComplexNumber();
	
	return 0;
}

