#include<iostream>
#include<string.h>

using namespace std;

class Shape{
	public:
		virtual void draw(){
			cout<<"The Shape Is Drawing "<<endl;
		}
};

class Rectangle{
	int length , width;
	
	public:
		void draw(){
			cout<<"The Rectangle Is Drawing "<<endl;
		}
};

class Circle : public Shape {
	public:
		void draw(){
			cout<<"The Circle Is Drawing "<<endl;
		}
};

int main(){
	Shape S;
	
	Circle C;
	
	
	Shape *ptr;
	ptr = &S;
	ptr->draw();
	
	Rectangle *ptr1 = new Rectangle;
	ptr1->draw();
	
	ptr = &C;
	ptr->draw();
	
}