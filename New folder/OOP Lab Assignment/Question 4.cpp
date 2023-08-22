#include<iostream>
#include<string.h>

using namespace std;

class Shapes{
	public:
		Shapes(){
			cout<<"Constructor Of Shapes Called"<<endl<<endl;
		}
		
		virtual void area() = 0;
		
		~Shapes(){
			cout<<"Destructor Of Shapes Called"<<endl<<endl;
		}
};

class TwodShapes : public Shapes{
	public:
		TwodShapes(){
			cout<<"Constructor Of 2d Shapes Called"<<endl<<endl;
		}
		
		~TwodShapes(){
			cout<<"Destructor Of 2d Shapes Called"<<endl<<endl;
		}
};

class ThreedShapes : public Shapes{
	public:
		ThreedShapes(){
			cout<<"Constructor Of 3d Shapes Called"<<endl<<endl;
		}
		
		virtual void volume() = 0;
		
		~ThreedShapes(){
			cout<<"Destructor Of 3d Shapes Called"<<endl<<endl;
		}
};

class Circle : public TwodShapes{
	private:
		float radius;
		
	public:
		Circle(float radius) : radius(radius) {
			cout<<"Constructor Of Circle Called"<<endl<<endl;
		}
		
		void area(){
			cout<<"The Radius Of The Circle Is : "<<3.142*radius*radius<<endl<<endl;
		}	
		
		~Circle(){
			cout<<"Destructor Of Circle Called"<<endl<<endl;
		}
};

class Square : public TwodShapes{
	private:
		float side;
		
	public:
		Square(float sideL) : side(sideL) {
			cout<<"Constructor Of Square Called"<<endl<<endl;
		}
		
		void area(){
			cout<<"Area Of The Square Is : "<<side*side<<endl<<endl;
		}
		
		~Square(){
			cout<<"Destructor Of Square Called"<<endl<<endl;
		}
};

class Cube : public ThreedShapes{
	private:
		float length;
		float width;
		float height;
		
	public:
		Cube(float length , float width , float height) : length(length) , width(width) , height(height) {
			cout<<"Constructor Of Cube Called"<<endl<<endl;
		}
		
		void area(){
			cout<<"The Surface Area Of A Cube Is : "<<6*(length*length)<<endl<<endl;
		}
		
		void volume(){
			cout<<"The Volume Of A Cube Is : "<<length*length*length<<endl<<endl;
		}
		
		~Cube(){
			cout<<"Destructor Of Cube Called"<<endl<<endl;
		}
		
};


class Pyramid : public ThreedShapes{
	private:
		float base;
		float height;
		
	public:
		Pyramid(float base , float height) : base(base) , height(height) {
			cout<<"Constructor Of Pyramid Called"<<endl<<endl;
		}
		
		void area(){
			float surfaceAreaOfPyramid = base*base + (0.5*(4*base)*height);
			
			cout<<"The Surface Area Of A Pyramid Is : "<<surfaceAreaOfPyramid<<endl<<endl;
		}
		
		void volume(){
			float volume = (1/3)*((base*base)*height);
			
			cout<<"The Volume Of A Pyramid Is : "<<volume<<endl<<endl;
		}
		
		~Pyramid(){
			cout<<"Destructor Of Pyramid Called"<<endl<<endl;
		}
};


int main(){
	Shapes *ArrayOfShapes[4];
	ArrayOfShapes[0] = new Circle(5);
	ArrayOfShapes[1] = new Square(5);
	ArrayOfShapes[2] = new Cube(5,5,5);
	ArrayOfShapes[3] = new Pyramid(5,5);
	
	
	for(int i=0;i<4;i++){
		delete ArrayOfShapes[i];
	}
	
}