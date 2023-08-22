#include<iostream>
#include<iomanip>

using namespace std;

class BMICalc{
	private:
		float weight;
		float height;
		float bmi;
	public:
		BMICalc(){
			weight = 0;
			height = 0;
			bmi = 0;
		}
		void setWeight(float weight){
			this->weight = weight;
		}
		void setHeight(float height){
			this->height = height;
		}
		
		float getBMI(){
			bmi = (weight / height * height)*1.0 ;
			
			return bmi;
		}
		
};

int main(){
	
	BMICalc Person1;
	float height , weight;
	
	
	cout<<"Enter Your Weight : ";
	cin>>weight;
	
	Person1.setWeight(weight);
	
	cout<<"Enter Your Height : ";
	cin>>height;
	
	Person1.setHeight(height);
	
	
	cout<<"\n\n Your BMI Is  : "<<Person1.getBMI()<<endl;
	
	
	return 0;
}