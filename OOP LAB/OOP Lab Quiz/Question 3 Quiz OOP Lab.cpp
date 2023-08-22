#include <iostream>


using namespace std;


int fibonacci(int terms){
	
	terms = terms - 2;
	
	int num1 = 0, num2 = 1, nextTerm = 0;
	
	cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; i++) {
       
        if(i == 1) {
            cout << num1 << ", ";
//            continue;
        }
        if(i == 2) {
            cout << num2 << ", ";
//            continue;
        }
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
	
	cout<<endl<<endl<<endl;
	
//	int number = 2;
//	
//	for(int i=1;i<=nextTerm;i++){
//		number = number*i;
//	}
//	
//	cout<<endl<<endl;
//	cout<<number;
	INT_MAX;
	
	cout<<"Max Value Of The System Is : "<<INT_MAX;
	
	cout<<endl<<endl;
	
	return nextTerm;
	
}



int main() {
    
    int terms;

    cout << "Enter the number of terms: ";
    cin >>terms;
	
	cout<<endl<<endl;
	
	double largestNum = (double) fibonacci(terms);
	
	cout<<"Largest Number Is : "<<largestNum<<endl;
	
	

    return 0;
}