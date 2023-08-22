#include<iostream>
#include<string.h>

using namespace std;

int getFactorial(int num){
	if(num == 1){
		return num;
	}
	else{
		num = num * getFactorial(num-1);
	}
}

int main(){
	
	cout<<getFactorial(3)<<endl;
	
	
}