#include<iostream>

using namespace std;

class Triangle{
	private:
		int	side1 = 0;
		int side2 = 0;
		int side3 = 0;
	
	public:
		Triangle(){			//Default Constructore
			side1=0;
			side2=0;
			side3=0;
		}
		
		Triangle(int a){		//Constructor That Recieves ONly 1 value
			side1=a;
			
		}
		
		Triangle(int a , int b){		// Constructore THat Recieves Only 2 values
			side1=a;
			side2=b;
		}
		Triangle(int a,int b,int c){
			side1=a;
			side2=b;
			side3=c;			
		}
		
		void display(){
			cout<<"Side 1 Is : "<<side1<<endl;
			cout<<"Side 2 Is : "<<side2<<endl;
			cout<<"Side 3 Is : "<<side3<<endl<<endl<<endl;
		}
		
		void setAllSides(int a, int b , int c){
			side1 = a;
			side2 = b;
			side3 = c;
		}
		
		~Triangle(){			//Default Destructor
			cout<<"GoodBye "<<endl;
		}
	
};



int main(){
	
	Triangle T1;
	T1.display();

	T1 = {6};
//	T1.display();
//	
//	T1 = {1,3};
//	T1.display();
//	
//	T1 = {6,7,5};
//	T1.display();
//	
//	T1.setAllSides(9,9,9);
//	T1.display();

	return 0;
}