#include<iostream>
#include<string.h>

using namespace std;


class Student {
	public:
		Student(){
			cout<<"Object Constructed "<<endl;
		}
		~Student(){
			cout<<"Object Destroyed "<<endl;
		}
};

int main(){
	
	Student *pointer1 = new Student;
	Student *pointer2 = new Student();  // it doesnt matter whether with emppty parenthesis or with no parenthesis in both the cases it will call the 
	                                    // Default constructor but will change the working when we write something inside the parentheses / brackets ;
	
	delete pointer1;                    // only those pointers can be deleted which are created through the new keyword ; because they are stored in heap;
	delete pointer2;
	

	return 0;
} 