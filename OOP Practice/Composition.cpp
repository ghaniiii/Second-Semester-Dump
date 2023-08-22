#include<iostream>
#include<string.h>

using namespace std;

class Element{
	private:
		int value;
		
	public:
		Element(int value){
			this->value = value;
			cout<<"Element("<<value<<") Constructed"<<endl;
		}
		void setValue(int value){
			this->value = value;
		}
		
		int getValue(){
			return value;
		}
		
};

class Composition{
	private:
		Element e1 , e2;
		
	public:
		Composition() : e1(1) , e2(2) {
			cout<<"Composition Constructed"<<endl;
		}
		
		int setElement(int eNum , int value){
			if(eNum == 1){
				e1.setValue(value);
			}
			else{
				e2.setValue(value);
			}
		}
		
		int getElement(int eNum ){
			if(eNum == 1){
				return e1.getValue();
			}
			else{
				return e2.getValue();
			}
		}
};


int main(){
	Element test(3);
	
	Composition c;
	c.setElement(1,2);
	cout<<"Element e1 : "<<c.getElement(2);
	
}