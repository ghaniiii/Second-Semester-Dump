#include<iostream>
#include<string.h>

using namespace std;

class A{
	private:
		int privDataA;
		
	protected:
		int protDataA;
		
	public:
		int pubDataA;
		
};

class B : public A{
	public:
		
		void fun(){
			int testing;
//			testing = privdataA;  // ERROR
			testing = protDataA;  // OK
			testing = pubDataA;   // OK
		}
		
};

int main(){
	int testing;
	
	B obj;
	
//	testing = obj.privDataA; // ERROR
//	testing = obj.protDataA; // ERROR
	testing = obj.pubDataA;  // OK
	
	
	
	return 0;
}