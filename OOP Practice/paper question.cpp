#include<iostream>
#include<string.h>

using namespace std;

int function(int array[],int size){
	
	array[size];
	
	if(size < 2){
		return 0;
	}
	else{
	
	
		int max1 = 0, max2=0;
		
		for(int i=0;i< size;i++){
			if(max1 < array[i]){
				max1 = array[i];
			}
		}
		max1 = 0;
		
		for(int i=0;i<size;i++){
			
				if(max2 < max1 ){
				max2 = array[i]; 
				}
			
		}
		
		return (max1+max2);
	
	
	}
	
	
}

int main(){
	
	int array[7] = {1,8,3,4,8,6,7};
	
	
	cout<<function(array , 7)<<endl;
	
	
	return 0;
}