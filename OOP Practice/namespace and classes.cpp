#include<iostream>
#include<string.h>

using namespace std;

namespace ns{
	void display();
	class Test{
		public:
			void display();
	};
}

void ns::Test::display(){
	cout<<"ns :: Test :: display()\n"<<endl;
}

void ns::display(){
	cout<<"ns :: display()\n"<<endl;
}

int main(){
	ns::Test obj;
	
	ns::display();
	
	obj.display();
	
	return 0;
}