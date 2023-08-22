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
		
		friend Complex adder(Complex *C1 , Complex *C2);
};

Complex adder(Complex *C1 , Complex *C2){
	
	float real = C1->real + C2->real;
	float imaginary = C1->imaginary + C2->imaginary;
	
	Complex C3(real , imaginary);
	
	return C3;
}


int main(){
	
	Complex C1(1 , 3);
	Complex C2(3 , 1);
	
	cout<<"First Complex Number : ";
	C1.displayComplexNumber();
	
	cout<<endl;
	
	cout<<"Second Complex Number : ";
	C2.displayComplexNumber();
	
	cout<<endl;
	
	Complex Sum = adder(&C1 , &C2);
	
	cout<<endl<<endl;
	
	cout<<"Their Sum Is : ";
	Sum.displayComplexNumber();
	
	return 0;
}

