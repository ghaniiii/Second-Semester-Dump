#include<iostream>

#include<string.h>

using namespace std;

int value = 100;


namespace N1{
	int value = 5;
}

namespace N2{
	class Sum;
}

class N2::Sum{
	private:
		int num1;
		int num2;
		
	public:
		Sum(int a ,int b): num1(a) , num2(b) {
			
		}
		
		int SumReturn(){
			return num1 + num2;
		}

};


int main(){
	
	cout<<value<<endl;
	cout<<N1::value<<endl;
	
	N2::Sum A(1,2);
	
	
	return 0;
}