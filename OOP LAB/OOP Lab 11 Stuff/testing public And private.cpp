#include<iostream>
#include<string.h>

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
//			testing = privDataA;  ERROR
			testing = protDataA;
			testing = pubDataA;
		}
	
};

class C : private A{
	public:
		void fun(){
			int testing;
//			testing = privDataA;  ERROR
			testing = protDataA;
			testing = pubDataA;
		}
};

int main(){
	
	int testing;
	
	B objB;
	testing = objB.pubDataA;
//	testing = objB.privDataA;
//	testing = objB.protDataA;
	
	
	C objC;
//	testing = objC.pubDataA;
//	testing = objC.protDataA;
//	testing = objC.privDataA;
//	
}