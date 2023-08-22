#include<iostream>
#include<string.h>

//Do A Memory Leak 

using namespace std;

class Section{
	public:
		int * totalStudents;
		
		Section(int num){
			totalStudents = new int[num];			// It Is Dynamic Array ; 
		}
		
		~Section(){
			delete [] totalStudents;
			cout<<"Object Destructed"<<endl;
		}
};

void makeALeak(){
	Section secA(5);
	

}

int main(void){
	
	makeALeak();
	

}