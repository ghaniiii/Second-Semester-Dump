#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
		int a = -15 , b = 50 , c = 3 , d = 2, e = 3.2, f = 3.6, g = 1, h = 8;
		
		cout<<"The Absolute Value Of a Is : " <<abs(a)<<endl;
		
		cout<<"d As A Power Of c is : "<<pow(c,d)<<endl;
		
		cout<<"cos(g) Value Is : "<<acos(g)<<endl;
		
		cout<<"sin(g) Value Is : "<<asin(g)<<endl;
		
		cout<<"tan(g) Value Is : "<<atan(g)<<endl;
		
		cout<<"Between -15 And 3 : "<<fmax(a,c)<<" is the greatest and we used fmax function"<<endl;
		
		cout<<"Between -15 and 3 : "<<fmin(a,c)<<" is the smallest and we used fmin function"<<endl;
		
		cout<<"The Remainder od c/d is : "<<fmod(c,d)<<endl;
		
		cout<<"Value Of e Rounded down to the nearest integer is : "<<floor(e)<<endl;
		
		cout<<"Value Of f Rounder Up to the nearest integer is : "<<ceil(f)<<endl;
		
		cout<<"The Difference Between b and c is : "<<fdim(b,c)<<endl;
		
		cout<<"Cube Root Of h is : "<<cbrt(h)<<endl;
		
		cout<<"The value of e without decimals is : "<<trunc(e)<<endl;
		
		cout<<"Natural Log Of e is : "<<log(e)<<endl;
		
		cout<<"Log of e To the Base 10 Is : "<<log10(e)<<endl;
		
		
	return 0;
}