#include<iostream>
#include<string.h>

using namespace std;

namespace ns{
	//Only declaring class here
	
	class Test;
}


class ns::Test{
	public:
		void display(){
			cout<<"Display Called ! "<<endl;
		}
};


int main(){
	//Creating Object Of Test Class
	
	ns::Test obj1;
	obj.display();
	
	return 0;
}