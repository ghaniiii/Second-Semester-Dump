#include<iostream>
#include<string.h>

using namespace std;

class detail{
	private: 
	     int rollNo;
	     string name;
		 char section;	
			
	public:
		detail (int a,string b,char c){
			rollNo = a;
			name = b;
			section = c;
		}
		
		void setrollNo(int x){
			rollNo = x;
		}
		void setname(string y){
			name = y;
		}
		void setsection(char z){
			section = z;
		}
		
		 
		 string getName(){
		 	return name;
		 }
		 
		 int getrollNo(){
		 	return rollNo;
		 }
		 
		 char getSection(){
		 	return section;
		 }
			
		 void display(){
		 	cout<<"Name : "<<getName()<<endl;
		 	cout<<"Roll Number : "<<getrollNo()<<endl;
		 	cout<<"Section : "<<getSection()<<endl;
		 }
};




int main(){
	
	detail ali = {6,"Abdul Ghani Khan",'C'};
	ali.display();
	
//	ali.setname("Abdul Ghani Khan");
//	ali.setrollNo(5);
//	ali.setsection('A');
//	
//	ali.display();
	
	
	
	
	
	
 Do all the same for a rectangle 
 with width 
 and length = 2 x width;
}

