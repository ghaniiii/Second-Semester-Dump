#include<iostream>
#include<string.h>

using namespace std;

//write an application that calculates the product
//of the odd integers from 1 to 15.


int main(){
	
	int product = 1;
	
	
	for(int i=1;i<=15;i++){
		
		if(i%2 != 0){
			cout<<i<<endl;
			
			product = product * i;
		}
		
	}
	
	cout<<"Product Of Odd Integers From 1 To 15 Is : "<<product<<endl;
	
	
	
	
	
	return 0;
}