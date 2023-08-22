#include<iostream.>

using namespace std;

class Triangle{
	private:
		int height;
		int s1;
		int s2;
		int s3;
		
	public:
		Triangle(int a,int b,int c, int d){
			height = a;
			s1 = b;
			s2 = c;
			s3 = d;
		}
		
		void DisplayArea(){
			cout<<"The Area Of the Triangle Is : "<<(height*s1)/2.0<<endl;
		}
		
		void DisplayParameter(){
			cout<<"The Parameter Of the Triangle Is : "<<(s1+s2+s3)<<endl;
		}
		
};

int main(){
    Triangle T = {10,5,5,5};
	
	T.DisplayArea();
	T.DisplayParameter();
	
	
}