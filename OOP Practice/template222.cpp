#include<iostream>

#include<string.h>

using namespace std;

template<class T , class U , class Z = char>

class Sum{
	private:
		T num1;
		T num2;
		
		U num4;
		
	public:
		Sum(T num , T num3 , U num5) : num1(num) , num2(num3) , num4(num5){
			
		}
		
		T Sum1(){
			return num1 + num2;
		}
		
		U Subtract(){
			return num4 - num2;
		}
};

template<class U>

class Subtract{
	private:
		U num1;
		U num2;
		
	public:
		Subtract(U N , U M) : num1(N) , num2(M){
		}
		
		U SubtractNum(){
			return num1 - num2;
		}
};



int main(){
	Sum<int , int> A(5,4,6);
	
	cout<<A.Sum1()<<endl;
	
	Sum<float , int> B(2.5 , 2.5 , 6);
	
	cout<<B.Sum1()<<endl;
	
	Subtract<int> S(5,4);
	
	cout<<S.SubtractNum()<<endl;
	
	cout<<B.Subtract()<<endl;
	
	
	
	return 0;
}