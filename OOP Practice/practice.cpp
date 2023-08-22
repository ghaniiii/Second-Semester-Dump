#include<iostream>
#include<string.h>

using namespace std;

template<class B , class C>
class A{
	private:
		B variable1;
		C variable2;
		
		public:
			A(B a , C b) : variable1(a) , variable2(b){
				
			}
			
			B getV1(){
				return variable1;
			}
			
			C getV2(){
				return variable2;
			}
};

int main(){
	
	A<int , string> obj1(1,"Abdul Ghani");
	
	cout<<obj1.getV1()<<endl;
	cout<<obj1.getV2()<<endl;
	
	
	return 0;
}