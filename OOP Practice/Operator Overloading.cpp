#include<iostream>
#include<string.h>

using namespace std;

class TComplex{
	private:
		int real;
		int imaginary;
		
	public:
		TComplex(int a = 0 , int b = 0): real(a) , imaginary(b){}
		
		TComplex operator + (TComplex & z){
			TComplex Result;
			Result.real = z.real + real;
			Result.imaginary = z.imaginary + imaginary;
			
			return Result;
		}
		
		void display(){
			cout<<real<<endl;
			cout<<imaginary<<endl;
		}
};

int main(){
	TComplex obj1(1,2);
	TComplex obj2(3,4);
	TComplex obj3;
	
	obj3 = obj1 + obj2;
	
	obj3.display();
	
}