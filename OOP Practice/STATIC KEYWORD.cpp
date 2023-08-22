#include<iostream>

using namespace std;


class Triangle{
	
	private:
		static const int w = 5;
		
		static int y;	
	
	
	
	public :  
		static int x ;
	
	static int gety(){
		return y; 
	}
	
	
};

int Triangle::y = 5;

// TO INITIALIZE X AS WE CANT DO IT  FROM WITHIN THE CLASS AND WE HAVE TO DO IT OUT OF THE CLASS.

int Triangle::x = 5;


int main(){
	
	int omega = 5;
	
	Triangle T1;
	
	Triangle *p = new Triangle;
		
	cout<<Triangle::x<<endl ;  //IT WILL WORK AS STATIC INT X IS PUBLIC IF IT GETS PRIVATE THEN WE WILL USE GETTER SETTER FUNCTIONS
	cout<<T1.gety();
	
	delete p; //YOU CAN ONLY DELETE A POINTER ;
	
	
	int *t = &omega;
	
	delete t;
	
	return 0;
}