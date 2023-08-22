


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
		
		friend class Operations;
		
};

class Operations{
	public:
		
		
		
		static Complex Add(Complex *C1 , Complex *C2){
			Complex C3(C1->real + C2->real , C1->imaginary + C2->imaginary);
			
			return C3;
		}
		
		static Complex Subtract(Complex *C1 , Complex *C2){
			Complex C3(C1->real - C2->real , C1->imaginary - C2->imaginary);
			
			return C3;
		}
		
		
		//Have Done It static To Access It Without The Objects;
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
	
  
    Complex Sum = Operations::Add(&C1 , &C2);
	Complex Subtraction = Operations::Subtract(&C1 , &C2);
	
	cout<<"Their Sum Is : ";
	Sum.displayComplexNumber();
	
	cout<<"Their Subtract Is : ";
	Subtraction.displayComplexNumber();
	
	return 0;
}

