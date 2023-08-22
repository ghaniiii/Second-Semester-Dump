#include<iostream>
#include<string.h>

using namespace std;

template<typename T>
class Node{
	public:
		T data;
		
		Node* next;
		
		Node(T data) : data(data) , next(NULL) {}
};



int main(){
	Node<string> obj("Abdul Ghani Khan");
	Node<int> obj2(3);

	
	cout<<obj.data<<endl;
	cout<<obj.next<<endl;
	
	cout<<endl<<endl;
	
	cout<<obj2.data<<endl;
	cout<<obj.next<<endl;
	
	cout<<endl<<endl;
	
	cout<<obj.next->data<<endl;
}