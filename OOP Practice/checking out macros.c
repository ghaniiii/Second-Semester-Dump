#include<stdio.h>

#define macro(n, limit) while (n < limit) { printf("*"); n++; }
#define concate(a,b) a##b
#define get_string(c) #c

int main(){
	

	int n= 0;
	macro(n, 5);
	printf("\n%d\n",concate(23,32));
	printf("\n%s",get_string(hello world this is abdul ghani khan));
	
	return 0;
}