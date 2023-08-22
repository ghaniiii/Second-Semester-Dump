#include<iostream>
#include<string.h>

using namespace std;

class Point{
	public:
		int x,y;
		
		//parametarized constructor
		Point(int x1, int y1){
			x = x1;
			y = y1;
		}
		
		//copy constructor 
		Point (Point &p1){
			x = p1.x;
			y = p1.y;
		}
		
		void print(){
			cout<<"The Values Are : "<<x<<endl<<y<<endl;
		}
		
		int getX(){
			return x;
		}
		
		int getY(){
			return y;
		}
};

int main(){
	
	//1st Object Of Point P And Normal Constructor Calling;
	
	Point p1(12 , 15);
	
	//second object copy constructor
	Point p2 (p1);
	
	//printing all values of x and y ;
	//	p2.print();
	//	p1.print();

	cout<<"The Value Of X Is : "<<p1.getX()<<endl;
	cout<<"The Value Of Y Is : "<<p1.getY()<<endl<<endl;
	
	cout<<"The Value Of X Is : "<<p2.getX()<<endl;
	cout<<"The Value Of Y Is : "<<p2.getY()<<endl;
	
	return 0;
}