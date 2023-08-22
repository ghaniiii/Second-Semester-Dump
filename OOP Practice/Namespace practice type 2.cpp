#include<iostream>
#include<string.h>

using namespace std;

namespace ns1{
	int value(){
		return 5;
	}
}

namespace ns2{
	
	const double x = 100;
	
	double value(){
		return 2*x;
	}
}



int main(){
	
	
	
	cout<<ns1::value()<<endl;
	
	cout<<ns2::value()<<endl;
	
	cout<<ns2::x<<endl;
	
	cout<<ns3::value()<<endl;
	
	return 0;
	
}